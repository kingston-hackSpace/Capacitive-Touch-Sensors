# Bare Conductive Board - SET UP INSTRUCTIONS

----
### Instructions 1: Hardware Plugin

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
### Instructions 2: Installing libraries

1. Donwload [this .zip folder](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/TouchBoard_libraries.zip), and unzip.

2. You should now see 3 folders (MPR121, SdFat, and SFEMP3Shield)

3. Copy and paste these 3 folders into the *libraries* folder inside the main Arduino folder located at:  

   - Windows: Libraries/Documents/Arduino/libraries

   - OR My Documents/Arduino/libraries

   - Mac: Documents/Arduino/libraries

   - Linux (Ubuntu): Home/Arduino/libraries

 4. Done! Close all folders. You *don't need* to repeat these steps again. 
