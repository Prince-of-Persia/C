// Display checkerboard pattern using eight printf statements,
// and display with as few printf statements as possible

#include <stdio.h>

int main (void) {

	// Eight printf statements
	
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");

	// Minimal amount of printf statements

	printf("\n* * * * * * * *\n * * * * * * * *\n"
		"* * * * * * * *\n * * * * * * * *\n"
		"* * * * * * * *\n * * * * * * * *\n"
		"* * * * * * * *\n * * * * * * * *\n");

}
