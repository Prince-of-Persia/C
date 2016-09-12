// Read a value and use floor(x) to round it to the nearest decimal place
#include <stdio.h>
#include <math.h>

// function prototypes
float roundToInteger(float x);
float roundToTenths(float x);
float roundToHundredths(float x);
float roundToThousandths(float x); 

int main (void) {

	float x;

	// Ask the user to enter a number
	printf("%s", "Enter a number: ");
	scanf("%f", &x); 

	// Calculate the values
	roundToInteger(x);
	roundToTenths(x);
	roundToHundredths(x);
	roundToThousandths(x); 

	puts(""); 
} // end main

float roundToInteger(float x) {

	float y;
	y = floor(x + .5); 
	printf("%f rounded to integer is %.0f\n", x, y); 

} // end roundToInteger

float roundToTenths(float x) {
	
	float y;
	y = floor(x * 10 + .5) / 10;
	printf("%f rounded to tenths is %.1f\n", x, y); 

} // end roundToTenths

float roundToHundredths(float x) {

	float y;
	y = floor(x * 100 + .5) / 100;
	printf("%f rounded to hundredths is %.2f\n", x, y);

} // end roundToHundredths

float roundToThousandths(float x) {

	float y;
	y = floor(x * 1000 + .5) / 1000;
	printf("%f rounded to thousandths is %.3f\n", x, y); 

} // end roundToThousandths 

