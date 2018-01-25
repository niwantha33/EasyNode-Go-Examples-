/*
 * Author : Niwantha 
 * src: Arduino References & Espressif  Arduino core 
 * Example: EasyNode Serial printf 
 * company : Algobel Technologies & Innovations  * 
 */

void setup() {
Serial.begin(115200);
}

void loop() {
  printf("%s","Hi EasyNode- Go \n");
  delay(1000);
}
