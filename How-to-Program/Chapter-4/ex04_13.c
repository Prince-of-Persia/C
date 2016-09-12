// Calculate and print the product of the odd integers from 1 to 15
#include <stdio.h>

int main (void) {

	unsigned int counter, product;

	product = 1; // Setting it to 1 eliminations multiplication errors

	for (counter = 1; counter <= 15; counter += 2) {
		product *= counter; 		
	} // end for

	printf("The product of the odd integers from 1 to 15 is %u\n", product); 

} // end main
