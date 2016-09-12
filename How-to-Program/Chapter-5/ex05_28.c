// Reversing the digits of a number
#include <stdio.h>

// function prototype
void reverse(int number);

// function main begins program execution
int main (void) {

	int number;

	// Ask the user for input
	printf("%s", "Enter the number: ");
	scanf("%d", &number); 

	// Reverse the digits
	reverse(number); 

} // end main

void reverse(int number) {

	int final; 
	
	// Initialize final
	final = 0; 

	// Determine the reverse number 
	while (number > 0) {
		final = (final * 10) + (number % 10);
		number /= 10; 
	} // end while

	printf("The reverse number is %d\n", final); 

} // end reverse
