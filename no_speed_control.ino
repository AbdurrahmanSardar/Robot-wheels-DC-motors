// C++ code
//

//NOTE: I have switched wires of motor2 so that one motor rotates
//opposite the other due to that the robot wheels move symmetrically
//after running PUSHBUTTON 
int x=0;  // set x=1, y=0 to move the robot forward
int y=1;  // or set x=0, y=1 to move the robot backward
		  // or both zeros or ones to stop the robot

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  
}

void loop()
{
  digitalWrite(13, x);
  digitalWrite(12, y);
  digitalWrite(11, x);
  digitalWrite(10, y);
}