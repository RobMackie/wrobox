#include <Arduino.h>
#include <DualBridge.h>

int EA = 9;
int i2 = 8;
int i1 = 7;

int EB = 5;
int i4 = 4;
int i3 = 3;

DualBridge h_bridge(EA,i1,i2,EB,i3,i4);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly: 
    h_bridge.motorA.forward(150);
    h_bridge.motorB.forward(75);
}
