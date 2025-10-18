//
int redPin = 11;
int bluePin = 10;
int greenPin = 9;
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
  delay(1000);
  analogWrite(redPin, 0);
  analogWrite(greenPin, 128);
  analogWrite(bluePin, 128);
  delay(1000);
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 128);
  delay(1000);
}