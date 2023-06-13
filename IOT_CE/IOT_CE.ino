#define BLYNK_TEMPLATE_ID "TMPL3dEaWEtiL"
#define BLYNK_TEMPLATE_NAME "IotCourseEnd"
#define BLYNK_AUTH_TOKEN "SfZfUb6W9Cr18XCVZyqZWO0aAeqt3fla"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
//
const int buzzer =  4;
//
 
char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "IotCourseEnd";
char pass[] = "IotCourseEnd";
 

BlynkTimer timer;
int flag=0; 
void sendSensor(){ 
   int isButtonPressed = digitalRead(D1);
  if (isButtonPressed==0 && flag==0) {
    Serial.println("Fire in the House");  
    Blynk.email("bayyaramharsha@gmail.com", "Alert", "Fire Detected!s");
    Blynk.logEvent("fire_alert","Fire Detected");
    
    digitalWrite(buzzer, HIGH);
    delay(5000);
    digitalWrite(buzzer, LOW);
    
    
    flag=1;
  }
  else if (isButtonPressed==1)
  {
    flag=0;
  }


 
}


void setup(){
  pinMode(D1, INPUT);
  //
  pinMode(buzzer, OUTPUT);
  //
 
   Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  //dht.begin();
  timer.setInterval(5000L, sendSensor);
}

void loop(){
  Blynk.run();
  timer.run();
}
