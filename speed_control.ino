// C++ code

//NOTE: I have switched wires of motor2 so that one motor rotates
//opposite the other due to that the robot wheels move symmetrically

int x=1;  // set x with 1 to move forward or 0 to move backward
int z;    // declare variable      

void setup()
{ pinMode(12, OUTPUT); // set output pins which are 12,11,10,9
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);}

void loop()
{ 
  digitalWrite(12, x);  // pin 12&11 are to control motor1
  digitalWrite(10, x);  // pin 10&9 are to control motor2
  
  z=analogRead(A0);     // here we take input from potentiometer
  z=map(z,0,1023,0,255);
  analogWrite(11,z);   // motor1 is taking input from potentiometer
  analogWrite(9,z);  // motor2 is taking input from potentiometer
}
