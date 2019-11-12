/*
  Blink
*/
 

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);              /* Hérna breytti ég delay svo að peran væri hálfa sek. að slokkna og kvikna í staðinn fyrir heila sek.*/
}
