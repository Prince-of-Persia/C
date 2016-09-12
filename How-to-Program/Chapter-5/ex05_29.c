// Find the greatest common divisor of two integers
#include <stdio.h>

// function prototypes
int gcd(int a, int b);

// function main begins program execution
int main (void) {

	int a, b;

	// Ask the user for the values
	printf("%s", "Insert two values: ");
	scanf("%d%d", &a, &b);

	// Determine the GCD 
	printf("The GCD is %d\n", gcd(a,b)); 

} // end main

int gcd(int a, int b) {

	int gcd, smallest;
	unsigned int counter;

	// Check which number is smaller 
	if (a < b) {
		smallest = a; 
	} // end if
	else {
		smallest = b; 
	} 

	for (counter = 1; counter <= smallest; ++counter) {
		if ((a % counter == 0) && (b % counter == 0)) {
			gcd = counter; 
		} // end if 
	} // end for
	
	return gcd; 
} // end gcd 
