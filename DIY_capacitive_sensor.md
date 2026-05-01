# DIY Capacitive Sensor

Any conductive material could be used as a capacitive sensor, just by programming a micro-controller (such as Arduino UNO) and using the corresponding libraries.

-----
### HARDWARE

- Arduino UNO

- Conductive material

- Jumper wires

-----
### INSTALLING LIBRARIES

- Open the Arduino IDE

- Open the *Library Manager* ("book shelf" icon at the left side of the Arduino IDE)

- Search for the following libraries at the search box (install both):

  - ADCTouch
  
  - CapacitiveSensor

- Optional: you can also download the libraries using [this link](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/DIY_Cap_libraries.zip). You will need to locate them in Arduino's main library folder. 

----
### TUTORIAL 1: Trigger to the touch

- See [wiring (touch) diagram here](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/Diagram_TriggerTouch.png)

- Download and upload [this (touch) code](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/DIY_trigger_touch.ino) to your Arduino board
  
----
### TUTORIAL 2: Sensing (capacitive) proximity

- See [wiring (proximity) diagram here](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/Diagram_TriggerProximity.png)

- Download and upload [this code](https://github.com/kingston-hackSpace/Capacitive-Touch-Sensors/blob/main/DIY_triggerProximity.ino) to your Arduino board
