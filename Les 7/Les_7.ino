int const pushButton = 2;
int const Buzzer = 8;

void setup()
{
  
  pinMode(pushButton, INPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop()
{
  bool buttonState = digitalRead(pushButton);    // 'bool' is better than 'int' here - smaller.
  
  //    Serial.println(buttonState);  // I commented this out, because it would result in a constant fast
  // stream of serial prints.
  //    delay(1);                     // This delay achieves nothing, so I removed it
  if (buttonState == HIGH)
  {
    digitalWrite(Buzzer, HIGH);
  }
  else                            // if (buttonState == 0) // no need for this. 'else' is better here.
  {
    digitalWrite(Buzzer, LOW);
    tone(Buzzer, 1000);
    delay(500);
    tone(Buzzer, 2000);
    delay(500);
  }
}
