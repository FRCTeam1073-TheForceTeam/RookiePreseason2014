/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 10/13/14

Program: Reads and prints the values for the Left and Right Line Sensors
*/
int leftLight = 0;
int rightLight = 1;

void setup(){
  Serial.begin(9600);
}
void loop(){
  int leftVal = analogRead(leftLight);
  int rightVal = analogRead(rightLight);
  Serial.println("Current Left Sensor Value: ");
  Serial.print(leftVal);
  Serial.println("Current Right Sensor Value: ");
  Serial.print(rightVal);
  delay(1000);
}

