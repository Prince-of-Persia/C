// Test a program that prints a 15x4 arrays of stars
#include <stdio.h>

int main (void) {

	int i, j, k;

	for (i = 1; i <= 5; ++i) {
		for (j = 1; j <= 3; ++j) {
			for (k = 1; k <= 4; ++k) {
				printf("%s", "*"); 
			} // end for 
			puts(" ");
		} // end for 
	} // end for 
	puts(" "); 

} // end main
