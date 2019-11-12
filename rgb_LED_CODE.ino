int redPin = 11;
int greenPin = 10;
int bluePin = 9;
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void loop()  {
  RGB_Color(255, 0, 0); //red
  delay(1000);
  RGB_Color(0, 255, 0); //green
  delay(1000);
  RGB_Color(0, 0, 255); //blue
  delay(1000);
}
void RGB_Color(int red_value, int green_value, int blue_value)
{
  analogWrite(redPin, red_value);
  analogWrite(greenPin, green_value);
  analogWrite(bluePin, blue_value);
}
