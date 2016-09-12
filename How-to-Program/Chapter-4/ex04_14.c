// Evalute the factorials of the integers 1 through 5
// Print results in tabular format 
#include <stdio.h>

int main (void) {

	unsigned int n, nfactorial, counter;

	printf("%2s%10s\n", "n", "n!");
	printf("%2s%10s\n", "---", " ----------");

	for (counter = 1; counter <= 5; ++counter) {
		
		nfactorial = 1; 
		for (n = counter; n >= 1; --n) {
			nfactorial *= n; 
		} // end for

		printf("%2u%10u\n", counter, nfactorial); 

	} // end for 

} // end main
