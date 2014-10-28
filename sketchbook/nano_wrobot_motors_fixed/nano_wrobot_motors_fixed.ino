/*
 
 */

int pin_m1 = 5;
int pin_m2 = 9;

void setup() {                
  pinMode(pin_m1, OUTPUT);
  pinMode(pin_m1, OUTPUT);
}

void loop() {
  delay(5000);   // wait for a second
  analogWrite(pin_m1, 175);   // set the LED on
  delay(2000);   // wait for a second
  
  analogWrite(pin_m2, 175);    // set the LED off
  delay(2000);   // wait for a second
  
  analogWrite(pin_m1, 0);   // set the LED on
  delay(2000);              // wait for a second
  
  analogWrite(pin_m2, 0);    // set the LED off
  delay(2000);   // wait for a second
  
}
