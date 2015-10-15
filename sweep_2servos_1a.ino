// Sweep for one servo by BARRAGAN http://barraganstudio.com
// This example code is in the public domain.
// Sweep for two servos by niq_ro http://arduinotehniq.blogspot.com
// and http://nicuflorica.blogspot.ro

#include <Servo.h> 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
Servo myservo2; // second servo object to control servo number 2
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  myservo2.attach(8); // attaches second servo on pin 8 to the servo 2 object 
} 
 
 
void loop() 
{ 
  for(pos = 40; pos < 140; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    myservo2.write(pos);              // tell second servo to go to position in variable 'pos' 
    delay(50);                       // waits 15ms for the servo to reach the position 
  } 
   for(pos = 140; pos>=40; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
   myservo.write(pos);              // tell servo to go to position in variable 'pos' 
   myservo2.write(pos);              // tell second servo to go to position in variable 'pos' 
    delay(50);                       // waits 15ms for the servo to reach the position 
  } 
  
  
    for(pos = 40; pos < 140; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo2.write(pos);              // tell second servo to go to position in variable 'pos' 
    delay(50);                       // waits 15ms for the servo to reach the position 
  } 
   for(pos = 140; pos>=40; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo2.write(pos);              // tell second servo to go to position in variable 'pos' 
    delay(50);                       // waits 15ms for the servo to reach the position 
  } 

  
  
} 
