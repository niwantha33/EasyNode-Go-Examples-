/*
   Author : Niwantha
   src: Arduino Refrences & Espressif  Arduino core
   Example: EasyNode Serial printf
   campany : Algobel Technologies & Innovations
*/


/*
Varaible : Ptimer
*/ 
volatile double Ptimer = 0;
const unsigned int Time_Out= 1000;


void setup()
{
  Serial.begin(115200);
}


void loop()
{
  if (millis() – Ptimer > = Time_Out) {
    Ptimer = millis();
    Serial.println("Delayed 1000 secs");
  }
}
