# R3-SoftwareTask1-FirstLast
 Hello! This repository contains information about R3's first module of the Software Training Package. Contents include a README file, Arduino code, and a simulation of the circuit through TinkerCAD.

This README file contains a run-down of the circuit project for R3's first module. 
TinkerCAD circuit: https://www.tinkercad.com/things/fBxnkJr6CzS


##TinkerCAD Diagram

The TinkerCAD diagram consists of several parts—an Arduino UNO, potentiometer, two seven-segment displays, two seven-segment decoders, a breadboard and two resistors. Its function is to turn the potentiometer's input into a numerical value from 0 to 99 in the seven-segment displays. To use it, you would click the 'Start Simulation' button in TinkerCAD, and use your mouse to drag the potentiometer's knob around. The very bottom left side of the potentiometer represents '0', while the opposite side carries the value '99'. As you move the knob around, it will display a numeric value based on its position through the use of the arduino and the decoders.

The Arduino UNO's 5 volt and ground pin is connected to a breadboard to power all the other components of the circuit. The potentiometer's 'Wiper' pin is connected to the Arduino's A0 pin to transfer its input. Then, the written code takes that potentiometer input and distributes power from PWM pins four to eleven based on the written code's conditions. Pins four to seven control the ones digit of the value, while the tens digit is displayed by pins eight to eleven. The colour-coded wires help to navigate the direction of the wires and their corresponding display. These pins then head over to their correspoding decoders, where each of the set of four pins are plugged in into one of the input pins of the decoder. The decoder then takes that input and transfers it to the display through the letter pins a, b, c, d, e, f, and g. These outputs are plugged into their corresponding letters in the display. The display not only have wires plugged in from the decoder, but each one has a resister connected to its common pin to the negative rail of the breadboard.


##C++ code

The code begins by assigning each PWM pin used to a corresponding variable (named as 'pin4', 'pin5',..., 'pin11'). Other significant variables hold information such as the potentiometer input value. The pinMode() function assigns each pin as either an output or an input. In this case, every pin other than 'A0' (which is responsible for the potentiometer's input) is labelled as 'OUTPUT'. It then continues into a loop block, where the potenValue is assigned the value of the potentiometer. That value is then converted into two digits and separates the digit in the tens place and ones place.

I added some functionality where the values of each variable (such as potentiometer value and digit in ones and tens place) is printed in the console/serial monitor for easier use and monitoring of the whole curcuit. 

The code then converts the numerical value, which is in decimal form, into binary form which the decoder can read. This converted binary number is only 4-bits, which is perfect as the maximum single digit that can be output is 9. For instance, if the decimal number were to be four, the code would use the digitalWrite() function to write the corresponding four output pins to either 'HIGH' or 'LOW'. Taking four as the example, pin4, pin5 and pin7 would be assigned 'LOW', while pin6 would be assigned 'HIGH'. This is because each pin represents a bit in binary. The decimal number 4 in binary would be 0100 (read from right to left, so pin4 would be 0 on the farthest right, pin5 would be the following 0, and so on). 

The tens digit is displayed first in the seven-segment display. If the variable 'tens' is equal to a specific numerical value, then it will take its decimal and convert it to a displayable output through the process noted above. After that, it calls on a different function named void onesDigit() to display the number of the potentiometer's ones digit. It uses the same process of converting the decimal to a readable binary number for the decoder as the 'tens' digit undergoes. At the end of each 'if' block in the onesDigit block, a loop(); is written for the process to return back to the main loop block where the main variables are stored. 

Overall, the written code is mostly comprised of 'if... then...' statements, matching the 'tens' and 'ones' places of the inputted value to the desired single numerical value output. There are also comments pasted throughout the code to ease navigation between variables and functions.
