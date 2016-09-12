// Input a series of integers and determine if they are even
#include <stdio.h>

int oddOrEven(int number); // function prototype

int main (void) {

	unsigned int i, counter, number;
	int valid; 

	// Ask the user how many numbers they want to test
	printf("%s", "How many numbers should be tested?: ");
	scanf("%u", &i);

	for (counter = 1; counter <= i; ++counter) {

		scanf("%u", &number); // Enter the number to be tested
		valid = oddOrEven(number); // Test the number

		if (valid == 1) {
			printf("The number %u is even\n", number);
		} // end if 
		else {
			printf("The number %u is odd\n", number); 
		} // end if 
	} // end for 

} // end main

int oddOrEven(int number) {

	if (number % 2 == 0) {
		return 1;
	} // end if
	else {
		return 0; 
	} // end else

} // end oddOrEven
