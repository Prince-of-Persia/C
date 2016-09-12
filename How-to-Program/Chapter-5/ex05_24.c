// Temperature Conversions
// Celsius function returns equivalent Fahrenheit temperature for 0-100 C
// Fahrenheit function returns equivalent Celsius temperature for 32-212 F
#include <stdio.h>

// function prototypes
double fahrenheit(int celsius); 
double celsius(int fahrenheit); 

// function main begins program execution
int main (void) {

	unsigned int counter;
	double f, c; 

	printf("%4s%8s\n", "C", "F"); 
	for (counter = 1; counter <= 100; ++counter) {
		f = fahrenheit(counter);
		printf("%4u%8.2f\n", counter, f);  
	} // end for 
	puts(""); 
	printf("%4s%8s\n", "F", "C"); 
	for (counter = 32; counter <= 212; ++counter) {
		c = celsius(counter); 
		printf("%4u%8.2f\n", counter, c); 
	} // end for
	puts(""); 
} // end main

double fahrenheit(int celsius) {

	double fahrenheit; 

	fahrenheit = (celsius * 9/5) + 32; 
	return fahrenheit; 

} // end fahrenheit

double celsius(int fahrenheit) {

	double celsius;

	celsius = (fahrenheit - 32) * 5 / 9; 
	return celsius; 
} // end celsius
