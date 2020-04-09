

int ledPin = 13; 
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;
int inPin = 7;   
int val = 0;     

void setup() {
  pinMode(ledPin, OUTPUT);  
  pinMode(ledPin2, OUTPUT);  
  pinMode(ledPin3, OUTPUT);  
  pinMode(ledPin4, OUTPUT);  
  pinMode(inPin, INPUT);    
}

void loop(){
  val = digitalRead(inPin);  
  if (val == HIGH) {  
    digitalWrite(ledPin, LOW);
    delay(250);
    digitalWrite(ledPin2, LOW);
    delay(250);
    digitalWrite(ledPin3, LOW);
    delay(250);
    digitalWrite(ledPin4, LOW);
  }   else {
    digitalWrite(ledPin, HIGH);  
    delay(250);
    digitalWrite(ledPin2, HIGH);
    delay(250);
    digitalWrite(ledPin3, HIGH);
    delay(250);
    digitalWrite(ledPin4, HIGH);
  }
}
