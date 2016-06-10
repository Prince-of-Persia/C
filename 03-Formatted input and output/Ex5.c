/*
Develop a program that converts integer Fahrenheit temperatures from 0 to 212
degrees to floating point Celsius temperatures with 3 digits of precision. Use the formula
				Celsius = 5.0/9.0 * (fehrenheit - 32);
to perform the calculation. The program output is displayed in the following format, where the
value of Celsius consists of 6 digits including the sign and the decimal point.
Fehrenheit 		Celsius
35 				+1.667
Fehreheit 		Celsius
10 				‐12.22
*/
//import required libraries 
#include <stdio.h>
#include <stdlib.h>
//function prototype
float fehreheitToCelsius (float number);
// Gloabal variables
float celsius;
int fehrenheit;
//main function
int main (void)
{
	printf("Enter fahrenheit temperature from 0 to 212\n");
	scanf("%d", &fehrenheit);
	celsius = fehreheitToCelsius(fehrenheit); // Do the conversion
	printf("Fehrenheit\tCelsius\n%d \t\t%+*.*f \n",fehrenheit, 4,3,celsius);
	return 0;
}
//function somthing
float fehreheitToCelsius(float number){
	float celsius; // to store the convertion
	celsius = 5.0/9.0 * (number	- 32); // fehrenheit to celsius conversion
	return celsius;
}
