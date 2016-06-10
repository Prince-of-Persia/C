/*
	Create a text-based, menu-driven program that allows the user to choose whether to
	calculate the circumference of a circle, the area of a circle or the volume of a sphere. The
	program should then input a radius from the user, perform the appropriate calculation and
	display the result. Use an array of function pointers in which each pointer represents a
	function that returns void and receives a double parameter. The corresponding functions
	should each display messages indicating which calculation was performed, the value of the
	radius and the result of the calculation.
*/
//import required libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _USE_MATH_DEFINES 
void circleCircumference (double a);
void circleArea (double b);
void sphereVolume (double c);
double radius;
int choice = 0;// a variable to hold user's choice

void main (void)
{
	/* initialize array of 3 pointers to functions that each take an
	   double argument and return void*/
	void (*f[3])(double) = {circleCircumference, circleArea, sphereVolume};
	
	while (choice >= 0 && choice < 3)
	{
		printf("Select from menu:\n\n");
		printf("0\tcircleCircumference\n1\tcircleArea\n2\tsphereVolume\n3\tExit\n");
		scanf("%d", &choice);//read the user input
		if (choice == 3)
		{
			break;
		} 
		else
		{
		printf("Enter the radius\n");
		scanf("%lf", &radius);
		/* invoke function at location choice in array f and pass
	   choice as an argument */
		(*f[choice])(radius);
		}
	}
	printf("Program execution completed.\n");
}

void circleCircumference (double a)
{
	double C;
	printf("You entered %.0lf so circleCircumference was called\n\n", choice);
	C = 2 * M_PI * a;
	printf("The circumference of circle radius %5.3lf is %5.3lf\n\n", a, C);

}
void circleArea (double b)
{
	double C;
	printf("You entered %.0lf so circleArea was called\n\n", choice);
	C = M_PI * pow(b, 2);
	printf("The area of circle radius %5.3lf is %5.3lf\n\n", b, C);
}
void sphereVolume (double c)
{
	double V;
	printf("You entered %.0lf so sphereVolume was called\n\n", choice);
	V = (1.3333) * M_PI * pow(c, 3);
	printf("The sphere volume radius %5.3lf is %5.3lf\n\n", c, V);
}