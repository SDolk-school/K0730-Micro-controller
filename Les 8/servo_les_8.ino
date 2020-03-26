#include <Servo.h>

Servo myservo;  

int servoPin = 9;


#define STOPpin 2 
#define CWpin 3 
#define CCWpin 4 

int sc[]={90, 45, 0}; 
//CCW, STOP,CW

String scText[]={"CCW","Stop","CW"};
int statusText;
int CWBS, CCWBS, SBS;


void setup() {
  Serial.begin(9600);
  pinMode(STOPpin,INPUT_PULLUP);
  pinMode(CCWpin,INPUT_PULLUP); 
  pinMode(CWpin,INPUT_PULLUP);
  
  myservo.attach(servoPin);  
  myservo.write(sc[1]);
  statusText=1;
}



void loop() {
  
  CCWBS = digitalRead(CCWpin);
  SBS = digitalRead(STOPpin);
  CWBS = digitalRead(CWpin);
  
  if(CCWBS ==LOW)
  {
    servoCommand(0);
  }else if(SBS ==LOW)
  {
    servoCommand(1);
  }else if(CWBS ==LOW)
  {
    servoCommand(2);
  }
  
  
  delay(50);
} 



void servoCommand(int n)
{
  statusText = n;
  myservo.write(sc[n]); 
  
}
