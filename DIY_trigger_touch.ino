#include <ADCTouch.h>

#define TOUCHPIN A0

// set the touch sensor resolution: 
// higher means more stable results, at the cost of higher processing times
#define RESOLUTION 100

#define SMOOTH 100 // determine how many readings are stored for smoothing
float multiplier = 1.2; // determine when the sensor is understood as "ON"
int previousReadings[SMOOTH]; // smooth data a little: the last readings
int currentIndex = 0; // used for cycling through the array
int reading; // the latest reading

// calculate the average of the previous readings
int average(){
  unsigned long sum = 0;
  for(int i = 0; i < SMOOTH; i++){
    sum += previousReadings[i];
  }
  return sum / SMOOTH;
}


void setup() {
  Serial.begin(9600); // serial communication
  pinMode(13,OUTPUT);
  // fill the [previousReaings] array with readings
  for(int i = 0; i < SMOOTH; i++){
    previousReadings[i] = ADCTouch.read(TOUCHPIN, RESOLUTION);
  }
}

void loop() {
  
  reading = ADCTouch.read(TOUCHPIN, RESOLUTION); // read the sensor
  Serial.println(reading);
  
  // check if triggered
  if(reading > average() * multiplier){
     digitalWrite(13, HIGH);
  }else{
    digitalWrite(13, LOW);
    previousReadings[currentIndex] = reading;
    
    // set index for the next reading
    currentIndex++;
    
    // mnake sure [currentIndex] doesn't get out of bounds
    if(currentIndex >= SMOOTH){
      currentIndex = 0;
    }
 } 
}
