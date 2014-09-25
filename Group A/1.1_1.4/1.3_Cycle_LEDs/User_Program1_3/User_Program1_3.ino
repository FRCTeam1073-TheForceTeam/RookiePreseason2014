/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Cycle the 3 leds of the robot, so that one led turns on, then the next, then the next
Feel free to view the example program within the same folder if you need help!
*/
int led1 = 5;
int led2 = 3;
int led3 = 6;
void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop(){
  digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1,LOW);
  delay(300);
    digitalWrite(led2, HIGH);
  delay(300);
  digitalWrite(led2,LOW);
  delay(300);
    digitalWrite(led3, HIGH);
  delay(300);
  digitalWrite(led3,LOW);
  delay(300);
}

