/*
(Fibonacci) The Fibonacci series 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
begins with the terms 0 and 1 and has the property that each succeeding term is
the sum of the two preceding terms.
a) Write a nonrecursive function fibonacci( n ) that calculates the nth Fibonacci
number. Determine the largest Fibonacci number that can be printed on your
system.
*/
//import required libraries
#include <stdio.h>
// Function prototype 
int Fibonacci(int);
//main function
int main()
{
	int n, i = 0, c;// n = umber of terms user inputs, i = number of terms, c = counter
	printf("Enter number of terms you want to display:\n");
	scanf("%d",&n);//reads the user input
	printf("Fibonacci Series:\n"); //Series header
	for ( c = 1 ; c <= n ; c++ )
	{
	  printf("%d\n", Fibonacci(i));
	  i++; 
	}
	return 0;
}
//Fibonacci function
int Fibonacci(int n)
{
	if ( n == 0 )
	  return 0;
	else if ( n == 1 )
	  return 1;
	else
	  return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 