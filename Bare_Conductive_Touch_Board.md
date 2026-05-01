# Bare Conductive Touch Board

The Bare Conductive Touch Board is an Arduino‑compatible board designed to **turn almost any material or surface into a touch sensor.** 

**12 ELECTRODES:**

The board has **12 built‑in capacitive electrodes** that respond to touch. These electrodes can be extended using conductive materials such as electric paint, foil, wire, or everyday conductive objects, making it possible to create touch‑sensitive illustrations, light switches, musical instruments, or custom interactive surfaces.

**MAKING SOUND:**

One of the Touch Board’s key features is its on‑board MP3 player and MIDI synthesizer. Touching an electrode can trigger a sound file from a microSD card, or act like a musical note in a digital instrument. This means you can create sound‑based interactions without writing any code, while still having the option to use the Arduino IDE for more advanced projects.

 It includes a **3.5 mm audio jack** for headphones or speakers, and a **microSD card** for storing sound files. 

[Watch this video for guidance](https://www.youtube.com/watch?v=pVvEQUbhar8)

----
### Features

- 5V operating voltage

- 7 PWM channels

- 12 analog input channels

- 12 Touch electrodes of which 8 can be configured as extra digital inputs or outputs with PWM capability

- Up to 32GB via micro SD card

- [Full Data Sheet here](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/TouchBoard_TechDataSheet.pdf)

----
### Instructions 1: SET-UP (start here!)

Follow our [SET-UP INSTRUCTIONS](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/BareConduct_setup.md) to use the Touch Board for the first time. 

----
### Instructions 2: AUDIO

Follow our [AUDIO INSTRUCTIONS](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/audio_instructions.md) here

---
### Instructions 3: SELECT THE BOARD

Repeat the following steps every time you plug your board to your computer:

1. Plug the Touch Board to your computer via the USB cable.

2. Make sure the on/off switch at the bottom left corner of your Touch Board is switched to ON. You should see the green light next to the on/off switch come on.

3. Open the Arduino IDE, and select the corresponding board from the box at the top left of your Arduino IDE (might be something like "/dev/cu/usbmodem1101") and click OK.

4. At the same box, it should say Bare Conductive Touch Board **in bold letters**

5. Your board is ready to programme!

---
### Instructions 4: CODING EXAMPLE

1. Download this [basic Arduino code example](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/Touch_MP3.zip) and upload it to your Touch Board.

2. Touch the board's electrodes to trigger the sounds! (remember to turn on the speaker)

3. Download [this zip folder to explore more examples](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/Touch%20Board%20Examples.zip)

----
### More tutorials

[Getting Started with the Touch Board](https://www.hackster.io/bareconductiveteam/getting-started-with-the-touch-board-96f9b3)

[How to Program the Touch Board for On Board MIDI Mode](https://www.hackster.io/bare-conductive/how-to-program-the-touch-board-for-on-board-midi-mode-006023)

[How to Fade an LED On with Proximity and the Touch Board](https://www.hackster.io/bareconductiveteam/how-to-fade-an-led-on-with-proximity-and-the-touch-board-ea465e)

[How to Get Polyphonic Playback with the Touch Board](https://www.hackster.io/bareconductiveteam/how-to-get-polyphonic-playback-with-the-touch-board-705bf7)

[How to Do Projection Mapping with the Touch Board](https://www.hackster.io/bareconductiveteam/how-to-do-projection-mapping-with-the-touch-board-542dcd)

[How to Send Data via Bluetooth with the Touch Board](https://www.hackster.io/bareconductiveteam/how-to-send-data-via-bluetooth-with-the-touch-board-68017b)

[Touch Board + MaxMSP](https://www.hackster.io/bareconductiveteam/touch-board-maxmsp-813494)

[Touch Board + Ableton Live](https://www.hackster.io/bareconductiveteam/touch-board-ableton-live-9e461e)
