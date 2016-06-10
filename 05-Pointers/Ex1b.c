/*
	Create a text-based, menu-driven program that allows the user to choose whether to add,
	subtract, multiply or divide two numbers. The program should then input two double values
	from the user, perform the appropriate calculation and display the result. Use an array of
	function pointers in which each pointer represents a function that returns void and receives
	two double parameters. The corresponding functions display messages indicating which
	calculation was performed, the values of the parameters and the result of the calculation.
*/
//import libraries
#include <stdio.h>
#include <stdlib.h>
//function prototype
void addition (double a, double b);
void subtraction (double a, double b);
void multiplication (double a, double b);
void division (double a, double b);
//variables
double results;
int choice = 0;

int main (void)
{
	//initialize array of 4 pointers
	void (*f[4])(double, double) = {addition, subtraction, multiplication, division};
	double x = 0, y = 0;
	while (choice >= 0 && choice < 4)
	{
		printf("Select from menu:\n\n");//header
		printf("0\tAddition\n1\tSubtraction\n2\tMultiplication\n3\tDivision\n4\tExit\n");
		scanf("%d", &choice);//read user input
		if (choice == 4) break;
		else
		{
			printf("Enter the first and second number:\n");
			scanf("%lf %lf", &x, &y);//read the numbers 
			(*f[choice])(x, y);	// call the function accordingly 
		}
	}
	printf("Program execution completed.\n");
}
void addition (double a, double b)
{
	results = a + b;	
	printf("%lf + %lf = %lf\n", a, b, results);
}
void subtraction (double a, double b)
{
	results = a - b;
	printf("%lf - %lf = %lf\n", a, b, results);
}
void multiplication (double a, double b)
{
	results = a * b;
	printf("%lf * %lf = %lf\n", a, b, results);
}
void division (double a, double b)
{
	results = a / b;
	printf("%lf / %lf = %lf\n", a, b, results);
}


