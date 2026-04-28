int signalPin = 6;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int touchState = digitalRead(signalPin);
  
  if(touchState==1){
  Serial.println("touch detected!");
  } else {
  Serial.println("no touch detected!");
  }
}
