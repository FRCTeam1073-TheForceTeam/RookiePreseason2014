/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Cycle the 3 leds of the robot, so that one led turns on, then the next, then the next
Feel free to view the example program within the same folder if you need help!
*/
int redled = 5;
int yellowled = 3;
int greenled = 6;
void setup(){
  pinMode(redled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(greenled, OUTPUT);
}

void loop(){
  digitalWrite(redled, HIGH);
  digitalWrite(yellowled, HIGH);
  digitalWrite(greenled, HIGH);
}

