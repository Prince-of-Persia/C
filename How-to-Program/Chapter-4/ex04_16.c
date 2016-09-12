// Print a series of triangle patterns separately, one below the other
#include <stdio.h>

int main (void) {

	unsigned int row, column, spaces; 

	// Print 10 rows of n stars, with rows from 1-10 in ascending order
	// and where n is the row number
	for (row = 1; row <= 10; ++row) {
		for (column = 1; column <= row; ++column) {
			printf("%s", "*"); 
		} // end for
		puts(" ");
	} // end for

	puts(" ");

	// Print 10 rows of n stars, with rows from 1-10 in descending order
	// and where n is the row number
	for (row = 10; row >= 1; --row) {
		for (column = 1; column <= row; ++column) {
			printf("%s", "*"); 
		} // end for 
		puts(" "); 
	} // end for

	puts(" ");

	// Print 10 rows of n stars, with rows from 1-10 in descending order
	// and where n is the row number, right justified
	for (row = 10; row >= 1; --row) {
		for (spaces = 0; spaces < 10-row; ++spaces) {
			printf("%s", " "); 
		} // end for
		for (column = 1; column <= row; ++column) {
			printf("%s", "*"); 
		} // end for
		puts(" "); 
	} // end for 

	puts(" ");

	// Print 10 rows of n stars, with rows from 1-10 in ascending order
	// and where n is the row number, right justified 
	for (row = 1; row <= 10; ++row) {
		for (spaces = 0; spaces < 10 - row; ++spaces) {
			printf("%s", " "); 
		} // end for
		for (column = 1; column <= row; ++column) {
			printf("%s", "*"); 
		} // end for
		puts(" "); 
	} // end for

	puts(" ");
} // end main
