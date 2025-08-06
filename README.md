LED switch with a Arduino Uno

An easy Arduino-project, that switches between 3 LEDs (for example red, green and blue) with one switch.

For this project you will need
- Arduino Uno
- 3 LEDs (red, green, blue)
- 3 220 ohm resistors
- 1 switch (button)
- 1 breadboard + 9 jumper cables

First off you need to connect a jumperwire from the GND port on the right side of the Arduino into the negative side of 
the bus on the breadboard. Next put your LEDs into the breadboard for example for the red one put the positive side 
(the longer side) into the the 12th row in the E row and the negative side (the shorter side) into the 10th row in the E row.
Just so you know all of the LEDs are in row E. Next put the positive side of the blue LED (it doesn't matter in which order
you put the colors) in row 22 and the negative in row 20. Now put the positive side of the green LED in row 32 und the
negative side in row 30. After that you put one side of a resistor (doesn't matter wich way) on the left
side of the positive side of the LED and the other side 4 rows down so that there is 3 pins in between. Do that for all of
the LEDs. Next connect a jumperwire in row A where the negative side of the LED is so for the first one in row then, for the
second one in row 20,and the last one in row 30. Now one side is conected with the LED so connect the other side on the 
negative side of the bus for every LED. And lastly we have to connect the button to the breadboard. To do that you have to 
take your button and put it horizantally in row 40 and 42and row E and F so that it sits over the gap. Now put a 10k ohm 
resistor on the bottom row of the button so row 42 an on the negative side of the bus. After that conect a jumpercable 
with row 40 A and the negative side of the bus. And last of all conect a jumperwire with every LED in row A where the resistor
ends an a jumperwire with row 42 D. You can connect the wires anywhere on the right side of the Arduino from 2 to 13 but keep
in mind where you conected your wire for the codeing.

For my code I utilise:
- 2 Variables
- 4 "if" statements for the LEDs
- 1 "if" statement for a counter

Upload Guide
1. set up the circuit
2. make your code
3. Upload to the Arduino Uno
4. open the serial Monitor with Tools > Serial Monitor
5. click button and observe the LED Change

Have fun trying the project out :)
