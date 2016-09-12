// Create a square from a character entered by the user
#include <stdio.h>

void fillCharacter(char c, int n); // function prototype

int main (void) {

	char c; // character entered by user
	unsigned int n; // square size

	// Enter the character
	printf("%s", "Enter the character and size: ");
	scanf("%c%u", &c, &n); 

	fillCharacter(c, n); // Create the square

} // end main

void fillCharacter(char c, int n) {

	int row, column; // row and column counter

	for (row = 1; row <= n; ++row) {
		for (column = 1; column <=n; ++column) {
			printf("%c", c);
		} // end for 
		puts(""); 
	} // end for 

} // end fillCharacter
