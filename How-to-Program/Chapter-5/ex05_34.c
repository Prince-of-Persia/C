// Write a recursive power(base, exponent) function
#include <stdio.h>

// function prototype
int power(int base, int exponent); 

int main (void) {

	int base, exponent, result; 

	// Input the base and exponent
	printf("%s", "Enter the base and exponent: ");
	scanf("%d%d", &base, &exponent); 

	// Calculate and return the value;
	result = power(base, exponent);
	printf("%d to the power of %d is %d\n", base, exponent, result); 

} // end main 

int power(int base, int exponent) {

	if (exponent > 1) {
		return base * power(base, exponent - 1);  
	} // end if

} // end power
