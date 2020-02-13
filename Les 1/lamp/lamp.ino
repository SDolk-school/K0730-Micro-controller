int led = 8;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led, HIGH);
delay(100);
digitalWrite(led, LOW);
delay(250);
digitalWrite(led, HIGH);
delay(100);
digitalWrite(led, LOW);
delay(250);
digitalWrite(led, HIGH);
delay(100);
digitalWrite(led, LOW);
delay(250);

digitalWrite(led, HIGH);
delay(400);
digitalWrite(led, LOW);
delay(250);
digitalWrite(led, HIGH);
delay(400);
digitalWrite(led, LOW);
delay(250);
digitalWrite(led, HIGH);
delay(400);
digitalWrite(led, LOW);
delay(250);

digitalWrite(led, HIGH);
delay(100);
digitalWrite(led, LOW);
delay(250);
digitalWrite(led, HIGH);
delay(100);
digitalWrite(led, LOW);
delay(250);
digitalWrite(led, HIGH);
delay(100);
digitalWrite(led, LOW);
delay(2000);
}
