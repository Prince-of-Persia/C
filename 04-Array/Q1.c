//import required libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function prptotype
double eval(double *a, double x, int n); //n is max degree
//global variables
int N = 0;//N is the polynomial order
double *a;//array
double	x; // constant
double P; //polynomial
int addition_counter = 0, multiplication_counter = 0;// counters
//main function
int main()
{
	printf("%s\n", "Enter the order number:");
	scanf("%d", &N); // user input for the order numbers
	while (N < 1) //input debuger
	{
		printf("%d %s\n%s\n", N,"is NOT a positive and non-zero number", "Enter a positive and non-zero integer:" );
		scanf("%d", &N); // user input for the order numbers
	}
	a = malloc ((N + 1) * sizeof(double));// assigning the array size in respect with user input
	printf("%s\n", "Enter your constant:" );
	scanf("%lf", &x);// user input for "x" constant
	for (int i = 0; i < N; ++i)
	{
		printf("Enter coefficient # %d\n", i);//an index to the coefficeients
		scanf ("%lf", &a[i]);//user input for coefficeients
	}
	P = eval (a, x, N); // calcultion of the polynomial
	
	/* Debug */ //To check for coefficents entered by the user
	for (int i = 0; i < N; ++i)
	{
		//a[i] = 0;
		printf("%6d%12.5lf\n", i, a[i]);
	}

	printf("P(x) = %13.5lf\n", P); //reporting the value of P(x) to user
	printf("Total of %d additions and %d multiplications are used\n", addition_counter, multiplication_counter); //reporting the additions and multiplications
}

//eval function
double eval(double *a, double x, int n)
{
	double results; // variable to store P(x)
	results = a[0]; //P(x) = first index of array 'a' 
	for (int i = 0; i < n; ++i)
	{
		results = results + (a[i+1] * pow(x, i+1));
		addition_counter++;
		multiplication_counter = multiplication_counter + (i+2);
		//since the counters are declared globally we can just write to them!
	}
	
	return results;
}

/*
double eval (double a[],  double x, int n)
{
	double results;
	int i = 0;
	while ( i < n)
	{
		results = results + ((a[n-2] + x) * (a[n-1] + (a[n] * x)));
		n--;
	}
	//results = results + a[0];
	return results;
}
*/