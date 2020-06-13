#include <Arduino.h>
#define led1 19
#define led2 21
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(BUILTIN_LED,OUTPUT);
Serial.begin(115200);
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  digitalWrite(led1,HIGH);
  delay(2000);
  digitalWrite(led2,HIGH);
  delay(2000);
  digitalWrite(BUILTIN_LED,HIGH);
  delay(2000);
   digitalWrite(led1,LOW);
  delay(2000);
  digitalWrite(led2,LOW);
  delay(2000);
  digitalWrite(BUILTIN_LED,LOW);
  delay(2000);
  */
  
  if(Serial.available()){
    char data = Serial.read();
    Serial.println();
    Serial.print("Karakter yang dikirim: ");
    Serial.println(data);

    if(data=='1'){
      digitalWrite(led1,HIGH);
    }
    else if(data=='2'){
      digitalWrite(led2,HIGH);
    }
    else if(data=='3'){
      digitalWrite(BUILTIN_LED,HIGH);
    }
       else if(data=='0'){
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(BUILTIN_LED,LOW);
    }
    else{
      Serial.println("Masukkan perintah yang benar");
    }
  }
  
}
