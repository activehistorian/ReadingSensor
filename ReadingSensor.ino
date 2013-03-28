#include <MeetAndroid.h>
#include "Ultrasonic.h"

Ultrasonic ultrasonic( 12, 13 );

MeetAndroid meetAndroid;

void setup()  
{
  Serial.begin(9600); 
}

void loop()
{
  meetAndroid.receive();
  meetAndroid.send(ultrasonic.Ranging(CM));
  delay(100);
}


