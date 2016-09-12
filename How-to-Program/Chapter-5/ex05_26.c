// Test whether a number is the sum of its factors
#include <stdio.h>

void perfect(int number); // function prototype

int main (void) {

	int number;

	// Input the number
	printf("%s", "Enter the number: ");
	scanf("%d", &number);

	// Pass through the perfect() function 
	perfect(number); 

} // end main 

void perfect(int number) {

	unsigned int counter;
	int total;

	total = 0; 

	for (counter = 1; counter < number; ++counter) {
		if (number % counter == 0) {
			total += counter;
			printf("%d ", counter);  
		} // end if 
	} // end for 
	puts("");
	
	if (total == number) {
		printf("%d is a perfect number\n", number); 
	} // end if
	else {
		printf("%d is not a perfect number\n", number); 
	} // end else

} // end perfect
