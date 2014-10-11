/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the LED on pin 5 turn on when the button is pressed
Feel free to view the example program within the same folder if you need help!
*/
int redled = 5;
int pushbutton = 7;

void setup()
{
  pinMode(redled, OUTPUT);
  pinMode(pushbutton, INPUT); 
}
void loop()
{
  if (digitalRead(pushbutton) == 1)
  {
    for (int i = 0; i <= 255; i = i+1)
    {
      analogWrite(redled, i);
      delay(10);
    }
  }
  else
  { 
    for (int i = 255; i >= 0; i = i-1)
    {  
      analogWrite(redled, i);
      delay(10);  
    }
  }
}
