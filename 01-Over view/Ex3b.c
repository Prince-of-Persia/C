/*
b) Write a program that estimates the value of the mathematical constant e by
using the formula:
e = 1 + (1/1!) + (1/2!) + (1/3!) + ...
The program should display a result for the user.
[Hints: If e represents a variable of data type double, printf(“%f ”, e) can be
used to print the value of e.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	double n = 0; //The number entered by user
	double nF = 0; // a variable to hold number of factorials
	double x = 1; //holds the corresponding factorial
	double e = 1; //holds the sum
	printf("Enter a non-negative integer: \n");
	scanf("%lf", &n);//reads the user input to variable 'n'
	//checks the number is non-zero and positive
	if(n > 0)
	{
		printf("Your number is: ");
		printf("%.2lf \n", n);//reports the number entered back to user
		//calculates the factorial of the entered number
		while(n > 0)
		{
			nF = n;
			x = x*nF;
			n = n-1;
			//calculates the sum
			for(nF <= n; nF; nF--)
			{
				e = e + (1.0/(x));
				/*
				printf("e = ");
				printf("%.2lf \n", e);	
				*/
			}
		}
		//prints results
		printf("n! = ");
		printf("%.2lf \n", x);
		printf("e = ");
		printf("%.2lf \n", e);	
	}
}