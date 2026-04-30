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
### Hardware Plugin

Whenever we use an Arduino, we have to tell the Arduino IDE which Arduino board we are using, in this case, the Bare Conductive Touch Board. However, you cannot find the Touch Board from Tools - Boards. We have to download and put the plugin in place.

1. Quit Arduino if you have it opened.

2. Download the Hardware Plugin here: [bare-conductive-arduino-public.zip](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/bare-conductive-arduino-public.zip)

3. Create a hardware folder:

   - Windows: Libraries/Documents/Arduino/hardware

   - OR My Documents/Arduino/hardware

   - Mac: Documents/Arduino/hardware

   - Linux (Ubuntu): Home/Arduino/hardware

4. Unzip and put the folder inside the hardware folder

5. Now open Arduino IDE, and navegate (top bare) > Tools > Boards > Bare Conductive Boards

----
### Audio Files

- Max 12 audio files
  
- Only MP3 files (free audio via available at [Freesound](https://www.freesound.org/))

- Name your files as follows:

  - TRACK000.mp3
  
  - TRACK001.mp3
  
  - TRACK002.mp3
  
  - ...up to TRACK011.mp3

 - Save the files in the micro SD card.

 - Insert the card in the Bare Conductive Touch Board
   
----
### Code and Instructions

1. Plug your the Touch Board to your computer via the USB cable.

2. Make sure the on/off switch at the bottom left hand corner of your Touch Board is switched to ON. You should see the green light next to the on/off switch come on.

3. Plug your speaker (or headphones) into the audio jack on the top left hand corner of your board.

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
