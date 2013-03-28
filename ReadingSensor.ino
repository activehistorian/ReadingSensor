/*
  Sends sensor data to Arduino
  (needs SensorGraph and Amarino app installed and running on Android)
*/
 
#include <MeetAndroid.h>
#include "Ultrasonic.h"

Ultrasonic ultrasonic( 12, 13 );

MeetAndroid meetAndroid;

void setup()  
{
  Serial.begin(9600); 
  pinMode(A0, INPUT);
}

void loop()
{
  int x = ultrasonic.Ranging(CM)
  meetAndroid.receive(); // you need to keep this in your loop() to receive events
  //int x = analogRead(A0);
  //int y = 4800/(x - 20);
  meetAndroid.send(x);
  
  //meetAndroid.send(x);
  // add a little delay otherwise the phone is pretty busy
  delay(100);
}


