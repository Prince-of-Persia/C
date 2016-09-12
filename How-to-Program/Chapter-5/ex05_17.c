// Determine if an integer is a multiple of another
#include <stdio.h>

int multiple(int x, int y); // function prototype

int main (void) {

	int num1, num2; // Two numbers 
	int valid; // Check if conditions are met

	// Ask the user for the two numbers
	printf("%s", "Enter two numbers, where 2 is a multiple of 1: ");
	scanf("%d%d", &num1, &num2); 

	// Determine if the numbers are a multiple
	valid = multiple(num1, num2); 
	
	if (valid == 0) {
		printf("%d is not a multiple of %d\n", num2, num1); 
	} // end if
	else {
		printf("%d is a multiple of %d\n", num2, num1); 
	} // end else
	

} // end main

int multiple(int x, int y) {

	if (x % y == 0) {
		return 1; 
	} // end if 
	else {
		return 0; 
	} // end else

} // end multiple
