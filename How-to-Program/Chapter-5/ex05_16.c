// Write a function integerPower(base, exponent) that returns the value of 
// base ^ exponent
#include <stdio.h>

int integerPower(int base, int exponent); // function prototype

int main (void) {

	int base, exponent;

	// Ask user for values
	printf("%s", "Enter x and y, where the desired value is x^y: ");
	scanf("%d%d", &base, &exponent); 

	// Calculate x^y
	integerPower(base, exponent); 


} // end main

int integerPower(int base, int exponent) {

	unsigned int i; // counter
	long int product; // x^y

	// Calculate 
	product = 1; 

	for (i = 1; i <= exponent; ++i) {
		product *= base; 
	} // end for 

	// Display result
	printf("%d to the power of %d = %ld\n", base, exponent, product); 
} // end integerPower
