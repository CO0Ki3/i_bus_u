#include <SoftwareSerial.h>

String sendBT = "0"; // Bus Number
SoftwareSerial BT(2,3);

void setup()
{
  Serial.begin(9600);
  BT.begin(9600);
  BT.println("check-!");
  Serial.println("check-!");
}

void loop
{
  if(BT.available() && Serial.available()) {
    BT.send(sendBT);
    BT.println("In Bus");
    delay(10);
  }
}
