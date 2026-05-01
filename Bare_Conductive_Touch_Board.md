# Bare Conductive Touch Board

The Bare Conductive Touch Board is an easy‑to‑use, Arduino‑compatible board designed to help you **turn almost any material or surface into a touch sensor.** 

**12 ELECTRODES:**

The board has **12 built‑in capacitive electrodes** that respond to touch. These electrodes can be extended using conductive materials such as electric paint, foil, wire, or everyday conductive objects, making it possible to create touch‑sensitive illustrations, light switches, musical instruments, or custom interactive surfaces.

**MAKING SOUND:**

One of the Touch Board’s key features is its on‑board MP3 player and MIDI synthesizer. Touching an electrode can trigger a sound file from a microSD card, or act like a musical note in a digital instrument. This means you can create sound‑based interactions without writing any code, while still having the option to use the Arduino IDE for more advanced projects.

 It includes a 3.5 mm audio jack for headphones or speakers, and a microSD card slot for storing sound files. 

[Watch this example for guidance](https://www.youtube.com/watch?v=pVvEQUbhar8)

----
### Features

- 5V operating voltage

- 7 PWM channels

- 12 analog input channels

- 12 Touch electrodes of which 8 can be configured as extra digital inputs or outputs with PWM capability

- Up to 32GB via micro SD card

- [Full Data Sheet here](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/TouchBoard_TechDataSheet.pdf)

----
### Instructions 1: Audio Files

- Max 12 audio files
  
- Only MP3 files

- Download [these audios](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/tree/main/audios) for testing with your board

- Free audio via available at [Freesound](https://www.freesound.org/))

- Name your files as follows:

  - TRACK000.mp3
  
  - TRACK001.mp3
  
  - TRACK002.mp3
  
  - ...up to TRACK011.mp3

 - Save the files in the micro SD card.

 - Insert the card in the Bare Conductive Touch Board

----
### Instructions 2: Hardware Plugin

Find additional instructions (with images) [here](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/RS_TouchBoard_instructions.pdf)

1. Quit Arduino if you have it opened.

2. Download the Hardware Plugin here: [bare-conductive-arduino-public.zip](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/bare-conductive-arduino-public.zip). We will come back to this later. 

3. You should have an Arduino folder at the following location. Find it.

   - Windows: Libraries/Documents/Arduino/

   - OR My Documents/Arduino/

   - Mac: Documents/Arduino/

   - Linux (Ubuntu): Home/Arduino/

5. Once at your Arduino folder, inside create a *hardware* folder (no capitals, no other name)

6. Unzip the previous download (bare-conductive-arduino-public.zip), and put that folder inside your newrly created *hardware* folder. You can close all folders now.

7. Plug your the Touch Board to your computer via the USB cable.

8. Make sure the on/off switch at the bottom left hand corner of your Touch Board is switched to ON. You should see the green light next to the on/off switch come on.

9. Plug your speaker (or headphones) into the audio jack on the top left hand corner of your board.

10. Open Arduino IDE, and navegate (top bare) > Tools > Boards > Bare Conductive Boards > Bare Conductive Board

11. Done! You *don't need* to repeat these steps again. 

----
### Instructions 3: Installing libraries

1. Donwload [this .zip folder](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/TouchBoard_libraries.zip). We will be back at it later. 

2. Find the *libraries* folder in your Arduino folder:

   - Windows: Libraries/Documents/Arduino/

   - OR My Documents/Arduino/

   - Mac: Documents/Arduino/

   - Linux (Ubuntu): Home/Arduino/
  
 3. Once at your *libraries* folder, unzip your download.

 
 6.    and put  folder inside your newrly created hardware folder. You can close all folders now.

---

### Instructions 4: Select the board

Repeat the following steps everytime you plug your board to your computer:

1. Select the corresponding board at the box at the top left of your Arduino IDE (might be something like "/dev/cu/usbmodem1101") and click OK.

2. At the same box, it should say Bare Conductive Touch Board **in bold letters**

3. Your board is ready to programme!
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
