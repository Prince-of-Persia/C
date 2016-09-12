// Modify a factorial function to print its local variable 
// and its recursive call parameter
#include <stdio.h>

unsigned long long int factorial (unsigned int number); 

int main (void) {

	unsigned int i; // counter

	// during each iteration, calculate
	// factorial(i) and display result
	for (i = 0; i <= 5; ++i) {
		printf("\n\t%u! = %llu\n", i, factorial(i));
		puts("----------------------"); 
	} // end for

} // end main

unsigned long long int factorial (unsigned int number) {

	unsigned long long int value; 

	// base case
	if (number <= 1) {
		value = 1; 
	} // end if
	else {  
		value = number * factorial(number - 1); 
	} // end else

	printf("Number: %u\tFactorial: %llu\n", number, value); 
	return value; 

} // end factorial 
