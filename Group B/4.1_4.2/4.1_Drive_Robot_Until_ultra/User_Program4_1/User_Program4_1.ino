/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot drive forward until the ultrasonic sees a wall
Feel free to view the example program within the same folder if you need help!
*/

#include <NewPing.h>
#include <Servo.h>
#define TRIGGER_PIN 12
#define ECHO_PIN 8
#define MAX_DISTANCE 200
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
Servo left;
Servo right;
int forward = 1700;
int forwar = 1300;
int poo = 1500;
void setup(){
  left.attach(10);
  right.attach(9);
}

void loop(){
  delay(50); 
  unsigned int uS = sonar.ping(); 
  unsigned int cmDist = uS / US_ROUNDTRIP_CM;
  Serial.println(cmDist);
  if (cmDist <= 10)
  {
    right.Servo(poo);
    left.Servo(poo);
  }
  else
  {
    left.Servo(forward);
    right.Servo(forwar);
  }
  
    
  
}

