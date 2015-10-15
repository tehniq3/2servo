// Sweep for one servo by BARRAGAN http://barraganstudio.com
// This example code is in the public domain.
// Sweep for two servos by niq_ro http://arduinotehniq.blogspot.com
// and http://nicuflorica.blogspot.ro

#include <Servo.h> 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
Servo myservo2; // second servo object to control servo number 2
int pos = 0;    // variable to store the servo position 
int val1, val2; // variable for servos position

int alfa1 = 5;    // minimum angle for first servo
int alfa2 = 125;  // maximum angle for first servo
int beta1 = 5;    // minimum angle for second servo
int beta2 = 175;  // maximum angle for first servo

int pauza = 50;
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  myservo2.attach(8); // attaches second servo on pin 8 to the servo 2 object 
} 
 
 
void loop() 
{ 

  // fist and second servos go from minumum to maximum
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees (theoretical)
  { 
    // in steps of 1 degree 
    val1 = map(pos, 0, 180, alfa1, alfa2);
    val2 = map(pos, 0, 180, beta1, beta2);
    myservo.write(val1);               // tell first servo to go to position in variable 'val1' 
    myservo2.write(val2);              // tell second servo to go to position in variable 'val2' 
    delay(pauza);                      // waits 'pauza' ms for the servo to reach the position 
  } 
  
delay(1000);  // wait one second

// fist servo is at minumum and second servo go from maximum to minimum
  for(pos = 180; pos > 0; pos -= 1)  // goes from 0 degrees to 180 degrees (theoretical)
  { 
    // in steps of 1 degree 
    val1 = map(pos, 0, 180, alfa1, alfa2);
 //   val2 = map(pos, 0, 180, beta1, beta2);
    myservo.write(val1);               // tell first servo to go to position in variable 'val1' 
    myservo2.write(beta2);              // tell second servo to go to position in variable 'val2' 
    delay(pauza);                      // waits 'pauza' ms for the servo to reach the position 
  } 

delay(1000);

// fist servo is at minimum and second servo go from maximum to minimum
  for(pos = 180; pos > 0; pos -= 1)  // goes from 0 degrees to 180 degrees (theoretical)
  { 
    // in steps of 1 degree 
//    val1 = map(pos, 0, 180, alfa1, alfa2);
    val2 = map(pos, 0, 180, beta1, beta2);
    myservo.write(alfa1);               // tell first servo to go to position in variable 'val1' 
    myservo2.write(val2);              // tell second servo to go to position in variable 'val2' 
    delay(pauza);                      // waits 'pauza' ms for the servo to reach the position 
  } 

delay(1000);

  // fist servo go from minumum to maximum and second servo is at minimum 
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees (theoretical)
  { 
    // in steps of 1 degree 
    val1 = map(pos, 0, 180, alfa1, alfa2);
//    val2 = map(pos, 0, 180, beta1, beta2);
    myservo.write(val1);               // tell first servo to go to position in variable 'val1' 
    myservo2.write(beta1);              // tell second servo stay to minimum position 
    delay(pauza);                      // waits 'pauza' ms for the servo to reach the position 
  } 

delay(1000);

// fist servo go from minumum to maximum, secojnd servo go from maximum to minimum
  for(pos = 180; pos > 0; pos -= 1)  // goes from 0 degrees to 180 degrees (theoretical)
  { 
    // in steps of 1 degree 
    val1 = map(pos, 0, 180, alfa1, alfa2);
    val2 = map(180-pos, 0, 180, beta1, beta2);
    myservo.write(val1);               // tell first servo to go to position in variable 'val1' 
    myservo2.write(val2);              // tell second servo to go to position in variable 'val2' 
    delay(pauza);                      // waits 'pauza' ms for the servo to reach the position 
  } 

delay(1000);

// first servo is at minimum, second servo go from maximum to minimum
  for(pos = 180; pos > 0; pos -= 1)  // goes from 0 degrees to 180 degrees (theoretical)
  { 
    // in steps of 1 degree 
//    val1 = map(pos, 0, 180, alfa1, alfa2);
    val2 = map(pos, 0, 180, beta1, beta2);
    myservo.write(alfa1);               // tell first servo to go to position in variable 'val1' 
    myservo2.write(val2);              // tell second servo to go to position in variable 'val2' 
    delay(pauza);                      // waits 'pauza' ms for the servo to reach the position 
  } 

delay(1000);


   
} // end main loop
