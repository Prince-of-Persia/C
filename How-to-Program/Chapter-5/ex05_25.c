// Return the smallest of three floating point numbers
#include <stdio.h>

// function prototype
float smallestNumber(float x, float y, float z); 

// function main begins program execution
void main (void) {

	float x, y, z;

	printf("%s", "Enter three numbers: ");
	scanf("%f%f%f", &x, &y, &z); 

	printf("The smallest value is %f\n", smallestNumber(x, y, z)); 

} // end main

float smallestNumber(float x, float y, float z) {

	float smallest; 

	smallest = x;
	if (y < smallest) {
		smallest = y; 
	} // end if 
	else if (z < smallest) {
		smallest = z;;
	} // end else if

	return smallest;; 

} // end smallestNumber
