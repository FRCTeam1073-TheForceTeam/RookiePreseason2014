/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Cycle the 3 leds of the robot, so that one led turns on, then the next, then the next
Feel free to view the example program within the same folder if you need help!
*/
int led =3;
int led2 = 5;
int led3 = 6; 
void setup()
{
  pinMode (led, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
}
void light (int state){
digitalWrite (state, HIGH);
delay (100);
digitalWrite(state, LOW);
}
void loop(){
  light (led);
  light (led2);
  light (led3);
}

