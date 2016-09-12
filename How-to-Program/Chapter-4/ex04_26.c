// Print a table that approximates pi by a n terms
// pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
#include <stdio.h>

int main (void) {

	double pi; // value of pi
	unsigned int number, counter; 

	// Enter number of terms to calculate pi 
	printf("%s", "How many terms should pi be approximated to? : ");
	scanf("%u", &number); 

	pi = 4; // initial value 

	for (counter = 2; counter <= number; ++counter) {
		
		if (counter % 2 == 0) { // If term is even, subtract
			pi -= (float)4/(2 * counter - 1); 
			// Typecast prevents truncation 
		} // end if 
		else { // If the term is not even, it must be odd 
			pi += (float)4/(2 * counter - 1);
			// Typecast prevents truncation  
		} // end else

	} // end for 

	printf("Pi at %u terms is approx equal to : %.6lf\n", number, pi); 
	
} // end main
