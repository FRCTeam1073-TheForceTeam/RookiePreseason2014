/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot drive forward until the ultrasonic sees a wall
Feel free to view the example program within the same folder if you need help!
*/

#include <Servo.h>
#include <NewPing.h>

#define ECHO_PIN = 8;
#define TRIGGER_PIN = 12;
#define MAX_DISTANCE = 200;

NewPing ultrasonic(12, 8 , 200);

Servo right;
Servo left;

int getDistance()
{
  delay(50);
  unsigned int uS = ultrasonic.ping();
  unsigned int cmDist = uS / US_ROUNDTRIP_CM;
  return cmDist;
}

void drive()
{
  if(getDistance() > 10)
  {
    right.writeMicroseconds(1300);
    left.writeMicroseconds(1700);
  }
  else
  {
   right.writeMicroseconds(1500);
   left.writeMicroseconds(1500); 
  }
}

void setup()
{
  right.attach(9);
  left.attach(10);
  
  //your code goes here
}

void loop()
{
  drive();
  //also here
}

