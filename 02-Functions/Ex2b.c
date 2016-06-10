/*
(Fibonacci) The Fibonacci series 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
begins with the terms 0 and 1 and has the property that each succeeding term is
the sum of the two preceding terms.
b) Modify the program of part a) to use double instead of int to calculate and
return Fibonacci numbers. Let the program loop until it fails because of an
excessively high value.
*/

//import required libraries
#include <stdio.h>
// Function prototype 
double Fibonacci(double);
//main function
int main()
{
	int c;// c = counter
	//there is not a requorment of user input as the program runs infinit
	printf("Fibonacci Series:\n"); //Series header
	for ( c = 1 ; c ; c++ )
	{
	  printf("%.1lf\n", Fibonacci(c));
	 
	}
	return 0;
}
//Fibonacci function
double Fibonacci(double n)
{
	if ( n == 0 )
	  return 0;
	else if ( n == 1 )
	  return 1;
	else
	  return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 