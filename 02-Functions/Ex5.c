/*
Develop a program that inputs two positive integers and compute the greatest
common divisor of the two integers. For example, we consider two integers, 66 and
121, and consider the following steps. The process is repeated until the reminder is
zero. The last divisor (11) is the gcd.
(the formating for the steps was not compatible)
*/
//import the required libraries
#include <stdio.h>
#include <stdlib.h>
//function prototype
int gcdCal (int a, int b);
//Global variables
int a, b, min, gcd; 
//main program
int main (void)
{
	printf("Enter the two integers to calculate gcd\n");
	scanf("%d %d", &a, &b); //reads the user inputs
	min=(a>b)?b:a; //minimum value is stored in variable min 
	if (a >= 1 && b >= 1)// checks for non-zero and positive numbers
	{
		printf("The Greatest Common Divisor of %d and %d is %d\n",a, b, gcdCal(a, b));
	}
}
int gcdCal (int a, int b)
{
	for (int i = min; i >= 1; --i)
	{
		if(a%i==0 && b%i==0)//Checking whether i is a factor of both number
      {
          gcd = i;//writes i to gcd
          break;//exit the loop if a gcd is found
      }
	}
	return gcd;
}