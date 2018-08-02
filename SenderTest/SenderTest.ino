#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {

  //Sender ist mit Pin 10 verbunden  
  mySwitch.enableTransmit(10);
  
}

void loop() {

  //Einschalten
  //der erste Parameter ist die Stellung der ersten fünf DIP-Schalter, 
  //der zweite Parameter die Stellung der restlichen fünf
  mySwitch.switchOn("11011", "10000");

  //Warte...
  delay(1000);
  
  //Ausschalten
  mySwitch.switchOff("11011", "10000");
  
  //Warte...
  delay(1000);
  
}
