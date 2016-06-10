/*
The factorial of a nonnegative integer n is written as n!
n! can be defined as follows:
n! = n(n − 1)(n − 2) · · · 1
for values of n greater than or equal to 1 and
n! = 1
for n = 0.
a) Write a program that reads a nonnegative integer, and computes and prints
the factorial of the nonnegative integer.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int n = 0; //The number entered by user
	int x = 1; //holds the corresponding factorial
	printf("Enter a non-negative integer: \n");
	scanf("%d", &n);//reads the user input to variable 'n'
	//checks the number is non-zero and positive
	if(n > 0)
	{
		printf("Your number is: %d \n", n);//reports the number entered back to user
		//calculates the factorial of the entered number
		for (n > 0; n; n--)
		{
			x = x*n;
		}
		printf("n! = ");
		printf("%d \n", x);//reports the factorial
	}
}
