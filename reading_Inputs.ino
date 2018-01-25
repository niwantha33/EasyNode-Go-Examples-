/*
 * Author : Niwantha 
 * src: Arduino Refrences & Espressif  Arduino core 
 * example: EasyNode Reading Digital Input
 * 
 */

void setup() {
 pinMode(2, OUTPUT);
 pinMode(13, INPUT);
}

void loop() {
  digitalWrite(2, digitalRead(13);
}
