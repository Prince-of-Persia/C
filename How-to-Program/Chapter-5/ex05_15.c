// Hypotenuse Calculator
// Calculate side c when side a and side b are given
#include <stdio.h>
#include <math.h>

double hypotenuse(double a, double b); // end prototype

int main (void) {

	double a, b;

	printf("%s", "Enter side a and side b length: ");
	scanf("%lf%lf", &a, &b); 

	// Calculate and display result
	hypotenuse(a, b);
	

} // end main

double hypotenuse(double a, double b) {

	double c;

	c = sqrt(a*a + b*b); // Pythagorean Theorem
	printf("A: %lf B: %lf C: %lf\n", a, b, c); 

} // end hypotenuse
