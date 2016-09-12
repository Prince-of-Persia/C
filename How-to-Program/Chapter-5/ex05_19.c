// Display a nxn matrix of asterisks, where n is an integer
// entered by the user
#include <stdio.h>

int matrix(int n); // function prototype

int main (void) {

	unsigned int n; 

	// Ask the user for n
	printf("%s", "Enter n, the size of an n x n matrix: ");
	scanf("%u", &n); 

	// Print the square
	matrix(n); 

} // end main

int matrix(int n) {

	int row, column; // loop counter

	for (row = 1; row <= n; ++row) {

		for (column = 1; column <= n; ++column) {
			printf("%s", "*");
		} // end for 
		puts(""); 
	} // end for 

} // end matrix 
