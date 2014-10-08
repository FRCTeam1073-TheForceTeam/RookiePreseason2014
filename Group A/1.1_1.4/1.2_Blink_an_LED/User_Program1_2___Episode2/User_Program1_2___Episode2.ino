/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Blink an LED on pin 5 
Feel free to view the example program within the same folder if you need help!
*/
int r = 5;
int time = 200;

void setup(){
  pinMode(r, OUTPUT);
}

void loop(){
  digitalWrite(r, HIGH);
  delay(time);
  digitalWrite(r, LOW);
  delay(time);
}

