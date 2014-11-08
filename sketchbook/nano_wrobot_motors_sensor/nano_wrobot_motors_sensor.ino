/*
 
 */

int pin_m1 = 5;
int pin_m2 = 9;
int pin_s1 = 4;

int temp_sensor = A0;

void setup() {                
  pinMode(pin_m1, OUTPUT);
  pinMode(pin_m2, OUTPUT);
  pinMode(pin_s1, INPUT);
}

void fixed_program(void) {
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

void sensor_program(void) {
  int temp = analogRead(temp_sensor);
  
  if (temp < 512) {
     analogWrite(pin_m2, 0);
     analogWrite(pin_m1, 75);   
     delay(10);   
  } else {
     analogWrite(pin_m1, 0);
     analogWrite(pin_m2, 75);    
     delay(10);   
  }  
}

void loop() {
  if (digitalRead(pin_s1)) {
    sensor_program();
  } else {
    fixed_program();
  }
}
