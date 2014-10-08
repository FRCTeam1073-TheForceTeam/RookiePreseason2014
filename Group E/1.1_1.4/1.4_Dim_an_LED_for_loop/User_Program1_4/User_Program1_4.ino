/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Fade in and out the led on pin 5 using 2 for loops
Feel free to view the example program within the same folder if you need help!
*/
int red = 5;
int delayTime = 20;
void setup(){
  pinMode(red, OUTPUT);
}

void loop(){
  for(int v = 0; v < 255; v += 5){
   analogWrite(red, v);
   delay(delayTime);
  } 
  for(int v = 255; v > 0; v -= 5){
   analogWrite(red, v);
   delay(delayTime);
  }
}

