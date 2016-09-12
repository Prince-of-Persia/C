// Enter several numbers and use the floor(x) function to assign the result to y
#include <stdio.h>
#include <math.h>

int main (void) {

	unsigned int i, counter;
	float number; 

	// Ask user how many numbers they want to input
	printf("%s", "How many numbers should be tested?");
	scanf("%u", &counter);

	// Determine the floor(x + .5) value for each number
	for (i = 1; i <= counter; ++i) {

		scanf("%f", &number);
		printf("%f %.2f\n", number, floor(number + .5)); 

	} // end for 

} // end main 
