//Created by: Dakota Cowell and Andrew Johnson
// Include the required Wire library for I2C
#include <Wire.h>

int receivedValue = 0;
int LEDPin = 13;
int buttonPin = 12;
int isSelected = false;
int buttonState = 0;

void setup() {
  // Start the I2C Bus as Master
  Wire.begin(); 
  Serial.begin(9600);

  //Set pin modes for the led and button pins
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {

  //Request 1 byte from Arduino at address 9
  Wire.requestFrom(9, 1);

  while (Wire.available()) { // slave may send less than requested
    receivedValue = Wire.read(); // receive a byte as int
    Serial.println(receivedValue);         // print the int
  }

  //Read in button state and see if it is high
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH){
    isSelected = !isSelected;
    delay(5000);
  }

  //Check if receivedValue is 1. If it is, turn on led
  if(receivedValue == 1){
    digitalWrite(LEDPin, HIGH);
  } else {
    digitalWrite(LEDPin, LOW);
  }

  //Begin transmission and send isSelected. 
  Wire.beginTransmission(9); // transmit to device #9
  Wire.write(isSelected);              // sends x 
  Wire.endTransmission();    // stop transmitting
  delay(100);
}
