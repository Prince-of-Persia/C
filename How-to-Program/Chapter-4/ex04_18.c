// Read 5 numbers between 1 and 30, and print a line containing 
// that number of adjacent asterisks
#include <stdio.h>

int main (void) {

	unsigned int counter, number, starcounter; 

	for (counter = 1; counter <= 5; ++counter) {
	
		printf("%s", "Enter a number between 1 and 30 : ");
		scanf("%u", &number);

		for (starcounter = 1; starcounter <= number; ++starcounter) {
			printf("%s", "*"); 
		} // end for 

		puts(" "); 

	} // end for 
} // end main
