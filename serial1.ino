/*
 * Author : Niwantha 
 * src: Arduino References & Espressif  Arduino core 
 * Example: EasyNode Serial printf 
 * company : Algobel Technologies & Innovations  * 
 */

void setup() {
Serial1.begin(115200);
Serial.begin(115200);
}

void loop() {
  printf("%s","Hi EasyNode- Go \n");
  Serial1.println("This is DBG port");
  delay(1000);
}
