#include "DualBridge.h"
#include "Arduino.h"

DualBridge::Motor::Motor() 
{
}

void DualBridge::Motor::init(int pwm, int i1, int i2)
{
	this->pwm = pwm;
	this->i1 = i1;
	this->i2 = i2;
}

void DualBridge::Motor::forward(int speed)
{
  if (speed > 255) { 
      speed = 255;
  }
  if (speed < 0) {
      speed = 0;
  }
  digitalWrite(this->i1, HIGH);
  digitalWrite(this->i2, LOW);
  analogWrite(this->pwm, speed);
}

DualBridge::DualBridge(int EA, int i1, int i2, int EB, int i3, int i4)
{
	this->motorA.init(EA, i1, i2);
	this->motorB.init(EB, i3, i4);
}

