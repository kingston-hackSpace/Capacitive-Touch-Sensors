/*
  Touch Board - play MP3 tracks from physical buttons/switches
  (no capacitive sensing used)

  Wiring: each button/switch goes between its pin and GND.
  Internal pull-ups are used, so no resistors needed.
    A0 -> TRACK000.mp3
    A1 -> TRACK001.mp3
    ... A5 -> TRACK005.mp3
*/

#include <SPI.h>
#include <SdFat.h>
#include <SFEMP3Shield.h>

SdFat sd;
SFEMP3Shield MP3player;

// Pins left free by the MPR121 and MP3 chip
const uint8_t buttonPins[] = {A0, A1, A2, A3, A4, A5};
const uint8_t numButtons = sizeof(buttonPins);

// true  = sound stops when the button is released / switch opened
// false = sound plays to the end once triggered
const bool STOP_ON_RELEASE = false;

const unsigned long DEBOUNCE_MS = 30;
const uint8_t VOLUME = 10;   // 0 = loudest, 254 = silent

bool stableState[numButtons];
bool lastReading[numButtons];
unsigned long lastChange[numButtons];
int currentTrack = -1;

void setup() {
  Serial.begin(57600);

  for (uint8_t i = 0; i < numButtons; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
    stableState[i] = HIGH;   // HIGH = not pressed
    lastReading[i] = HIGH;
    lastChange[i] = 0;
  }

  if (!sd.begin(SD_SEL, SPI_HALF_SPEED)) sd.initErrorHalt();
  MP3player.begin();
  MP3player.setVolume(VOLUME, VOLUME);
}

void loop() {
  for (uint8_t i = 0; i < numButtons; i++) {
    bool reading = digitalRead(buttonPins[i]);

    // Debounce: only accept a change once it has been steady for DEBOUNCE_MS
    if (reading != lastReading[i]) {
      lastReading[i] = reading;
      lastChange[i] = millis();
    }
    if (millis() - lastChange[i] < DEBOUNCE_MS || reading == stableState[i]) continue;
    stableState[i] = reading;

    if (reading == LOW) {                         // pressed / switch closed
      if (MP3player.isPlaying()) MP3player.stopTrack();
      MP3player.playTrack(i);
      currentTrack = i;
      Serial.print("Playing track ");
      Serial.println(i);
    } else if (STOP_ON_RELEASE && currentTrack == i) {  // released / opened
      MP3player.stopTrack();
      currentTrack = -1;
    }
  }
}
