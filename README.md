# Robot-wheels-DC-motors
In this repository I'm designig two models for **Double DC Motor** using L293D instead of L298N, one model with no control of speed and other with speed control. I'm also designing power circuit to recharge the battery which is supplying this robot and choosing an appropriate battery as well.
### **L293D**
H-bridge motor drive L293D has 16 pins, 4 input pins, 4 output pins, 4 ground pins, 2 power pins and 2 enable pins. Now let's understand it more, input 1&2 to control motor1 and input 3&4 to control motor2 output pins are connected to the motors one power pin is 12V and other is 5V from arduino and enable pins are 5V both. Arduino and battery has to be grounded togather for synchronization. Arduino is used to give low and high signals for these input pins to control the switching and rotation direction of DC motors thus, for pinputs from arduino are used here. L298N is not a big difference in connection compared to L293D.
*Note that this model is for robot wheels and that's why I have switched input & output pins of motor2 in order to that one motor rotates opposite the other (one clockwise and other anti clockwise) and coded it such way that they even move the robot forward or backward and not letting the robot to rotate in the same place*
### **BATTERY**
Amoung all the components, DC motor has the largest volts which is (12-24V) while servo (4.8-7.2V), arduino (5V or 7-12V), that's why I have choosen 12V power supply but yet did't choose the ampacity of the battery due to lack of information about amperage consumption of servo and DC motors in this model.
### **NO SPEED CONTROL MODEL**
The code in this model is consisted of two variables x and y, set x=1, y=0 to move the robot forward or set x=0, y=1 to move the robot backward or stop the robot by giving both zeros or ones. Connection is already explained above. The code can be modified without variables but this is how I though it would be better. Here you can find my tinker cad circuit:[Tinker CAD link](https://www.tinkercad.com/things/gJXGIF3PHID-double-dc-motor-drive-using-l293d-/editel?sharecode=YEVZkY5P8HJD8JLh93t3U2AGznhJT64qG7qmwSldpgM)
### **SPEED CONTROL MODEL**
A potensiometer is added here to vary the speed, and here we have a variable x in the code, set x=1, to move the robot forward or set x=0, to move the robot backward. The problem here is that when reversing the direction of the rotation the potentiometer is also reversed, chech the simulation file to undestand more. Here you can find my tinker cad circuit: 
[Speed control in tinker CAD](https://www.tinkercad.com/things/5u8cmRQaIrf-double-dc-motor-drive-using-l293d-control-the-speed/editel?sharecode=_XaLr2XnUgrqJ6hlp1PBPorn3rDyBt3A2h5BfCY3f9U)
### **Battery Recharging Power Circuit**
I have found several circuits that have the same concept of using transformer, rectifier bridge,voltage regulator and capacitors. I have choosen **220/24V transformer** for stepping down the AC voltage. then, two capacitors (470 and 0.1 micro F), LM7812 voltage regulator to regulate 24v to 12V and finally two capacitors (0.1 and 220 micro F).
Unfortunately I couldn't simulate the circuit. I have used this site to draw the circuit:
[Charging circuit](https://crcit.net/c/70d00e45baa140718479b2c06b232305)

### **ATTACHMENTS**

Let me introduce all the attachments in this repository. There are several files with the following extensions: brd files, which is a simulation files from Tinker CAD simulation website. ino file, which is an Arduino code to control the DC motors. and there are PNG files to show the simulation before and after running the simulation and the code beside voltage regulator connection.

If you are working on this in real life please check for the connection of each element carefully as shown in the simulation file of the pictures attached before running for the safety of your tools.
