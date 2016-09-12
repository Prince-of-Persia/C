// Calculate and print the sum of even integers from 2 to 30
#include <stdio.h>

int main (void) {

	unsigned int counter, sum; 

	sum = 0; 

	for (counter = 2; counter <= 30; counter += 2) {
		sum += counter; 	
	} // end for 

	printf("The sum of the even integers from 2 to 30 is %d\n", sum); 

} // end main
