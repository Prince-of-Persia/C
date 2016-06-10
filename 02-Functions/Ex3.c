/*
(Rounding Numbers) Function floor may be used to round a number to a
specific decimal place. The statement
				y = floor( x * 10 + .5 ) / 10;
rounds x to the hundredths position (the second position to the right of the decimal
point). Write a program that defines four functions to round a number x in various
ways
a) roundToInteger( number )
b) roundToTenths( number )
c) roundToHundreths( number )
d) roundToThousandths( number )
The program c an be used to print the original value, the number rounded to
the nearest integer, the number rounded to the nearest tenth, the number
rounded to the nearest hundredth, and the number rounded to the nearest
thousandth. A n e x amp l e o f the output of the program is given as:
How many numbers do you want to process? 1
Enter number: 8.54739
8.547390 rounded to an integer is 9.000000
8.547390 rounded to the nearest tenth is 8.500000
8.547390 rounded to the nearest hundredth is 8.550000
8.547390 rounded to the nearest thousandth is 8.547000
*/
//import required libraries
#include <stdio.h>
#include <math.h>
//functions prototype
double roundToInteger     (double number);
double roundToTenths 	  (double number);
double roundToHundreths   (double number);
double roundToThousandths (double number);
	//global variables
	int c = 1; //counter, user input
	double	x; //user input
int main (void){
	
	//display message
	printf("How many numbers do you want to process?\n" );
	scanf("%d", &c); //User inputs the counter
	if (c >= 1) //checks for a non-zero and possitive number
	{
		while (c >= 1)
		{
			printf("Enter yout number:\n");
			scanf("%lf", &x); //User inputs the number to be rounded
			printf("The number you entered is: %lf\n", x);
			//use the functions to round the number
			printf("%lf rounded to an integer is: %lf\n", x, roundToInteger(x));//round to integer
			printf("%lf rounded to the nearest tenth is: %lf\n", x, roundToTenths(x));//round to tenths
			printf("%lf rounded to the nearest hundredth is: %lf\n", x, roundToHundreths(x));//round to hundreths
			printf("%lf rounded to the nearest thousandth is: %lf\n", x, roundToThousandths(x));//round to thousandths
			c--; //decriment counter
		}
	} else {
		printf("Invalid Entry. Termination of program!\n");
	}
}
double roundToInteger (double number){
	double y;// variable to hold the rounded number
	y = floor(number + 0.5);
	return y;
}
double roundToTenths (double number){
	double y;// variable to hold the rounded number
	y = floor(number * 10 + 0.5) / 10;
	return y;
}
double roundToHundreths (double number){
	double y; // variable to hold the rounded number
	y = floor( number * 100 + 0.5 ) / 100;
	return y;
}
double roundToThousandths (double number){
	double y; // variable to hold the rounded number
	y = floor( number * 1000 + 0.5 ) / 1000;
	return y;
}