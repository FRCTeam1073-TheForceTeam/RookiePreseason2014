/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Fade in and out the led on pin 5 using 2 for loops
Feel free to view the example program within the same folder if you need help!
*/
int i = 0;
int led = 6;
void setup()
{
 pinMode(led, OUTPUT);
}

void loop(){
  for(int i=0; i <= 255; i++)
  {
  analogWrite(led, i);
  delay (20);
  }
  
  if ( i <254){
  for (i=254; i>0; i--) 
  {
  analogWrite(led, i);
  delay (20);
  }
  }
  

}
