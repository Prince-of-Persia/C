// Print a table of binary, octal and hexadecimal values in 
// the range 1 - 256
#include <stdio.h> 

int main (void) {

	unsigned int counter, value, bit, remainder;  

	// Print a header for the table 
	printf("%8s %8s %8s %8s\n", "Base10", "Base-2", "Base-8", "Base16"); 
	printf("%9s%28s\n", "---------", "----------------------------"); 


	for (counter = 1; counter <= 256; ++counter) {
	
		printf("%4u%6s", counter, " ");

		remainder = 0; 	
		value = counter; 
		// Determine string of 1s and 0s for binary
		for (bit = 8; bit >= 1; --bit) {
			remainder = value % 2; 
			printf("%u", remainder); // Print remainder
			value /= 2; 
			
		} // end for 
		printf(" %6o %6X\n", counter, counter); 
	} // end for 

} // end main 
