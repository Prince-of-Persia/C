// Find the smallest of several integers
// Assume the first value read is the size of the set of integers 
#include <stdio.h>

int main (void) {

	unsigned int value, size, smallest, counter;

	printf("%s", "Enter the size of the integer set : ");
	scanf("%u", &size); 

	smallest = 0; // initialize smallest

	for (counter = 1; counter <= size; ++counter) {
	
		scanf("%u", &value);

		// Check if value is smallest
		if (counter == 1) {
			smallest = value;
		} // end if
		else if (value < smallest) {
			smallest = value; 
		} // end else if 
	} // end for

	printf("The smallest value of the set is %u\n", smallest); 

} // end main
