
/*  This is a default program--
  Use File->Load Prog to load a different program
*/
int led=8;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(1500);
}
