// Determine if a number is prime
// Determine and print all prime numbers from 1-10K 
#include <stdio.h>

// function prototype
void prime(int number);

// global variables
int row = 0; 

int main (void) {

	unsigned int counter; 

	// Test all prime numbers from 1 to 10K 
	for (counter = 1; counter <= 10000; ++counter) {
		prime(counter); // Test if each value is prime
	} // end for
	puts(""); 

} // end main 

void prime(int number) {

	unsigned int counter, total;

	// Initialize 
	total = 0; // Number of divisible factors

	for (counter = 1; counter <= number; ++counter) {
		if (number % counter == 0) {
			total += 1; // Increment total 
		} // end if
	} // end for 

	if (total == 2) { // Total can be no less than 2, by definition 
		printf("%8d ", number);	
		++row;
		if (row % 10 == 0) {
			puts("");
		} // end if 	
	} // end if
	
} // end prime
