// Recursive function gcd finds the greatest common denominator
// of two numbers x and y
#include <stdio.h>

int gcd(int x, int y); 

int main (void) {

	int x, y, value; 

	// Input the numbers
	printf("%s", "Enter numbers x and y: ");
	scanf("%d%d", &x, &y); 

	// Determine the gcd of the two numbers
	value = gcd(x, y); 
	printf("The gcd of %d and %d is %d\n", x, y, value); 

} // end main 

int gcd(int x, int y) {

	if (y == 0) {
		return x; 
	} // end if
	else {
		return gcd(y, x % y); 
	} // end else

} // end gcd
