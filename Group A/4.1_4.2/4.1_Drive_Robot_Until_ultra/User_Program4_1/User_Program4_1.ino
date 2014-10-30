/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot drive forward until the ultrasonic sees a wall
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>
#include <NewPing.h>
#define TRIGGER_PIN 12
#define ECHO_PIN 8
#define MAX_DISTANCE 200
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
Servo left;
Servo right;
int freshHold = 20;

void setup(){
  left.attach(10);
  right.attach(9);
}
void drive(){
  if(getDist() <= freshHold){
   left.writeMicroseconds(1500);
   right.writeMicroseconds(1500);
  }
  else {
    left.writeMicroseconds(1700);
    right.writeMicroseconds(1300);
  }
}
int getDist(){
  delay(50); //delay in milliseconds, no lower than 40 so the sensor can measure the return time                    
  unsigned int uS = sonar.ping(); // Send ping, get ping time in microseconds (uS).
  unsigned int cmDist = uS / US_ROUNDTRIP_CM; //calculate the distance, in centimeters
  return cmDist;
}

void loop(){
   drive();
}
