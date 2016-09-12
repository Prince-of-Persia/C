// Find all sets of Pythagorean Triples no larger than 500 
#include <stdio.h>

int main (void) {

	unsigned int a, b, c; // Three sides of a triangle 
	unsigned int n; // Count how many triples there are 

	// Find where a*a + b*b = c*c 

	n = 1; // initialize set count 

	// Fix a and modify b to achieve c*c
	for (a = 1; a <= 500; ++a) {
		for (b = 1; b <= 500; ++b) {
			for (c = 1; c <= 500; ++c) {
				if (a*a + b*b == c*c) {
					printf("Set %u: %u %u %u\n", n, a, b, c);
					++n; 
				} // end if 	
			} // end for 
		} // end for 
	} // end for 


} // end main
