// Input an integer between 1-32767 inclusive and print it as a series of digits 
// with two spaces between each digit
#include <stdio.h>
#include <math.h> 

int digitCount(int x); // function prototype

int main (void) {

	int x, y, z; 
	int ycount;
	unsigned int counter;  

	// Ask user for variables
	printf("%s", "Enter two values between 1 and 32767 inclusive: ");
	scanf("%d", &x); 

	ycount = digitCount(x); // Determine how many digits are in x

	for (counter = 1; counter <= ycount; ++counter) {
		y = pow(10, ycount - counter); // Start by getting the front digit 
		printf("%d  ", ((x/y) % 10)); // Divide the values and get modulus of 10
	} // end for 
	puts(""); 
} // end main

int digitCount(int x) {

	int y, ycount;

	ycount = 0; 
	y = 1; 

	// Count up the number of digits by dividing until
	// fractional results are obtained 
	while (x/y != 0) {
		++ycount;
		y *= 10; 
	} // end while 

	return ycount; 
} // end digitCount
