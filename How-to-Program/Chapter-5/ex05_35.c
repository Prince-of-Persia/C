// Calculate the nth Fibonacci number using a nonrecursive function
#include <stdio.h>

// function prototype
unsigned long long int fibonacci(unsigned int); 

int main (void) {

	unsigned int number;
	unsigned long long int result; 

	// Ask for the number
	printf("%s", "Enter the nth Fibonacci number: ");
	scanf("%u", &number);

	// Calculate the nth Fibonacci number
	result = fibonacci(number); 
	printf("The %dth Fibonacci term is %llu\n", number, result); 

} // end main

unsigned long long int fibonacci(unsigned int number) {

	unsigned int counter;
	unsigned long long int fibonacci, fib1, fib2;  

	if (number == 1) {
		fibonacci = 0; 
	} // end if
	else if (number == 2) {
		fibonacci = 1; 
	} // end else if
	else {
		fib1 = 0;
		fib2 = 1; 

		for (counter = 3; counter <= number; ++counter) {
			fibonacci = fib1 + fib2; 
			fib1 = fib2;
			fib2 = fibonacci; 
		} // end for 
	} // end else

	return fibonacci; 

} // end fibonacci
