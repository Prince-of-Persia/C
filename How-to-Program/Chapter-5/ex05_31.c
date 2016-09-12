// Simulate coin tossing 100 times
#include <stdio.h>
#include <stdlib.h>

// function prototype
int flip(); 

int main (void) {

	unsigned int counter, heads, tails; 
	int result; 

	// Initialize head and tails counter
	heads = 0;
	tails = 0; 

	// Seed the random number generator
	srand(time(NULL));  

	for (counter = 1; counter <= 100; ++counter) {
		result = flip(); 
		switch(result) {

			case 0:
			++tails;
			break;

			case 1:
			++heads;
			break; 

		} // end switch
	} // end for
	
	// Display results
	printf("Heads: %d Tails: %d\n", heads, tails); 

} // end main

int flip() {

	int result;

	// Give two possible results (Heads/Tails)
	result = rand() % 2; 

	return result; 

} // end flip
