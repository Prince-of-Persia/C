// Print a variety of shapes
#include <stdio.h>

// function prototype
void square(char c, int n); 
void triangle(char c, int n); 
void inv_triangle(char c, int n);  
void heart(char c, int n); 

// function main begins program execution 
int main (void) {

	// Initialize variables
	unsigned int choice;

	char c; // Character to be printed 
	unsigned int n; // Number of rows

	// Ask the user for variables
	printf("%s", "Enter the char and row size: ");
	scanf("%c%u", &c, &n);	

	printf("%s", "Enter [1: square, 2: triangle, 3: inverted triangle ]: "); 
	scanf("%u", &choice);

	switch (choice) {
		
		case 1:
		square(c, n);
		break; 

		case 2:
		triangle(c, n);
		break; 

		case 3:
		inv_triangle(c, n);
		break;

		case 4:
		heart(c, n);
		break; 

	} // end switch	

} // end main 

void square(char c, int n) {

	unsigned int row, column; // Row and column counter

	for (row = 1; row <= n; ++row) {
		for (column = 1; column <= n; ++column) {
			printf("%c", c); 
		} // end for 
		puts(""); 
	} // end for

} // end square

void triangle(char c, int n) {

	unsigned int row, column, space; // Row, column and space counter
	unsigned int colSize; // Size of char columns
	unsigned int spaceSize; // Size of space columns

	for (row = 1; row <= n; ++row) {
		colSize = 2 * row - 1; 
		spaceSize = ((2 * n - 1) - colSize) / 2; 

		// Print set of spaces, set of stars, set of spaces
		for (space = 1; space <= spaceSize; ++space) { 
			printf("%s", " "); 
		} // end for
		for (column = 1; column <= colSize; ++column) {
			printf("%c", c); 
		} // end for 
		for (space = 1; space <= spaceSize; ++space) {
			printf("%s", " "); 
		} // end for 
		puts(""); 
	} // end for 

} // end triangle

void inv_triangle(char c, int n) {

	unsigned int row, column, spaces; // Row, column and space counter
	unsigned int colSize; // Size of char columns
	unsigned int spaceSize; // Size of space columns

	for (row = n; row >= 1; --row) {

		colSize = 2 * row - 1; 
		spaceSize = ((2 * n - 1) - colSize) / 2;

		// Print spaces, character and spaces 
		for (spaces = 0; spaces <= spaceSize; ++spaces) {
			printf("%s", " ");
		} // end for
		for (column = 1; column <= colSize; ++column) {
			printf("%c", c);
		} // end for
		for (spaces = 0; spaces <= spaceSize; ++spaces) {
			printf("%s", " "); 
		} // end for

		puts(""); 
	} // end for  

} // end inv_triangle

void heart(char c, int n) {

	





} // end heart
