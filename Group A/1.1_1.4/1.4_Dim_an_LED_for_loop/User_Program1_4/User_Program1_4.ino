/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Fade in and out the led on pin 5 using 2 for loops
Feel free to view the example program within the same folder if you need help!
*/
int r = 5;
int time = 20;

void setup(){
pinMode(r, OUTPUT);
}
void loop(){
  for(int i = 0; i < 255; i = i + 5){
    analogWrite(r, i);
    delay(time);
  }
  for(int i = 255; i > 0; i = i - 5){
    analogWrite(r, i); 
    delay(time);
  }
}

