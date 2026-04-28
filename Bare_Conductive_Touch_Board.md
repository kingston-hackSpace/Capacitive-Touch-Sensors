# Bare Conductive Touch Board

The Bare Conductive Touch Board is an easy‑to‑use, Arduino‑compatible board designed to help you **turn almost any material or surface into a touch sensor.** 

**12 ELECTRODES**

The board has **12 built‑in capacitive electrodes** that respond to touch. These electrodes can be extended using conductive materials such as electric paint, foil, wire, or everyday conductive objects, making it possible to create touch‑sensitive illustrations, light switches, musical instruments, or custom interactive surfaces.

**MAKING SOUND**

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

2. Download the Hardware Plugin here: [bare-conductive-arduino-public.zip]

Create a hardware folder

Windows: Libraries/Documents/Arduino/hardware

OR My Documents/Arduino/hardware

Mac: Documents/Arduino/hardware

Linux (Ubuntu): Home/Arduino/hardware

Unzip and put the folder inside the hardware folder
