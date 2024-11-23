# Overview
* This folder contains practical 4.
* The program calculates the approximate area under the curve using the trapezoidal rule of the tangent function between 0 and 60 degrees.

* To compile: 
	* gcc -o trap02 .trap02.c -lm
* Make sure that *math.h* library is compatible with your compiler.
* To execute:
	* Use ./trap02 command.
* Output:
TanArr[0] = 0.000000
TanArr[1] = 0.087489
TanArr[2] = 0.176327
TanArr[3] = 0.267949
TanArr[4] = 0.363970
TanArr[5] = 0.466308
TanArr[6] = 0.577350
TanArr[7] = 0.700208
TanArr[8] = 0.839100
TanArr[9] = 1.000000
TanArr[10] = 1.191754
TanArr[11] = 1.428148

Initial area (sum at x(0) and x(12)) = 0.000000
Value of the sum after the loop is: 14.197204

 Trapezoidal result is: 0.619470
Real result is:0.693147  
* The program calculates and prints the tangent values for each interval, then computes the intermediate areas using the trapezoidal rule. Finally, it displays the total result from the trapezoidal method and compares it with the actual value of log(2).
