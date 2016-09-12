// Sum a sequence of integers, assume first scanf value is the size of the 
// sequence
#include <stdio.h>

int main (void) {

	unsigned int size, value, total, counter; 

	printf("%s", "Enter the size of the set : ");
	scanf("%u", &size); 

	total = 0; 

	for (counter = 1; counter <= size; ++counter) {		
		scanf("%u", &value); 
		total += value; 	
	} // end for

	printf("The total value is %u\n", total); 

} // end main
