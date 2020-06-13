#include <Arduino.h>

#define potPin 4
int adcVal = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 adcVal = analogRead(potPin);
 String printData = "Nilai ADC yang terbaca adalah: " + String(adcVal);
 Serial.println(printData);
 delay(2000);
}