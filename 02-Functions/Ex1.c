/*
(Rounding Numbers) The standard library of C contains a number of
mathematical functions including floor, ceil, abs, fabs, and sin. The header
ile math.h contains prototypes for these functions. An application of function
floor is rounding a value to the nearest integer. The statement
				y = floor( x + 0.5 );
will round the number x to the nearest integer and assign the result to y. Write a
program and a function which includes the above statement in order to round each
of several floating-point values to its nearest integer. For each number processed,
print both the original number and the rounded number. The outputs of the program
should be in the following format:

Enter a floating‐point value: 3.4
3.400000 rounded is 3.0

Enter a floating‐point value: 10.5
10.500000 rounded is 11.0
*/
//import required libraries
#include <stdio.h>
#include <math.h>
//function prototype
double roundingNumbers (double	number);
//main function 
int main (void){
	double f; //a number user inputs
	double x; //holds the rounded number
	printf("Enter a floating‐point value:\n");
	scanf("%lf",&f);//reads the user input
	x = roundingNumbers(f); //passes the value of 'f' to roundingNumbers()
	printf("%.1lf rounded is %.1lf\n", f, x);
}

//roundingNumbers function
double roundingNumbers (double	number){
	double	y; //a variable to hold the rounded number
	y = floor(number + 0.5); //round up or down //returns the largest integral value not greater than x.
	return y;
}