/*
Use printf and %f to display the value, 100.453627, to the nearest digit (i.e.
100), the tenth digit (i.e. 100.5), the hundredth digit (i.e. 100.45), the thousandth digit
(i.e. 100.453) and the ten-thousandth digit (i.e. 100.4536).
nearest digit 			100
tenth digit 			100.5
hundredth digit 		100.45
thousandth digit 		100.453
ten‐thousandth digit 	100.4536
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float x; //variable to hold the user input
	printf("Enter your number\n");
	scanf("%f", &x);//read the user input
	printf("Your number is %f\n", x);
	printf("nearest digit 			%.0f\n", x);
	printf("tenth digit 			%.1f\n", x);
	printf("hundredth digit 		%.2f\n", x);
	printf("thousandth digit 		%.3f\n", x);
	printf("ten‐thousandth digit 		%.4f\n", x);
	return 0;
}