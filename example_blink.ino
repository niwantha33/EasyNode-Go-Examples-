/*
 * Author : Niwantha 
 * src: Arduino Refrences & Espressif  Arduino core 
 * example: EasyNode blink LED 
 * 
 */

void setup() {
 pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, 1-digitalRead(2);
}
