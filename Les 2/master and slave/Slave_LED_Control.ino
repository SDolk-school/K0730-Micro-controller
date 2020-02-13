//Authors: Andrew Johnson, Dakota Cowell
// Include the required Wire library for I2C
#include <Wire.h>

int LED = 13;
bool valueReceived;
int isOn = 0; // Off = 0 On = 1

void setup() {
  //Set up serial output baud number
  Serial.begin(9600);
  // Define the LED pin as Output
  pinMode (LED, OUTPUT);
  // Start the I2C Bus as Slave on address 9
  Wire.begin(9); 
  // Attach a function to trigger when something is received.
  Wire.onReceive(receiveEvent);
  //Attach a function to trigger when something is requested
  Wire.onRequest(requestEvent);
}

void receiveEvent(bool bytes) {
  //Read one value from the I2C
  valueReceived = Wire.read();
  //Display the value received  
  Serial.println(valueReceived);
  //If the value received was true turn the led on, otherwise turn it off
  if(valueReceived){
    isOn = 1;
  }
  else{
    isOn = 0;
  }
}

void requestEvent(){
  //Tell the master whether the led is on or not
  Wire.write(isOn);
}

void loop() {
  //Turn on or off the led based on the master's input
  if(isOn){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
}

