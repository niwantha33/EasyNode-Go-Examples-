/*
 * Author : Niwantha 
 * src: Arduino References & Espressif  Arduino core 
 * Example: EasyNode Serial printf 
 * company : Algobel Technologies & Innovations 
 * 
 */

void setup() {
Serial1.begin(115200);
Serial.begin(115200);
pinMode(13,INPUT);
pinMode(12,OUTPUT);
Serial.println("EasyNode-Go DBG Mode");
}

void loop() {
    int input_value = 1- digitalRead(13);
    digitalWrite(12,input_value);
    Serial1.println(input_value);  
}
