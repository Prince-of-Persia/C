// Calculate and print the average of several integers. 
// Last value read by scanf is the sentinel value 9999
#include <stdio.h>

int main (void) {

	unsigned int value, total, size;  
	float average; 

	total = 0; 
	size = 0; 
	average = 0; 
	value = 0;

	scanf("%u", &value); 

	while (value != 9999) {
		total += value;
		++size;  
		scanf("%u", &value);	
	} // end while

	average = (float)total/size;
	printf("The average of the sequence is %f\n", average); 
	
} // end main
