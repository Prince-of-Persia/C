// Calculate compound interest for interest rates of 5% to 10%
// Use a for loop to vary the interest rate
#include <stdio.h>
#include <math.h>

int main (void) {

	double amount; // amount on deposit
	double principal = 1000.0; // starting principal
	unsigned int rate; // annual interest rate
	unsigned int year; // year counter

	// output table column heads
	printf("%4s%21s\n", "Year", "Amount on deposit"); 

	// calculate amount on deposit for each rate change
	for (rate = 5; rate <= 10; ++rate) {

		printf("At a rate of %u percent interest per year\n", rate); 
		for (year = 1; year <= 10; ++year) {
		
			// calculate amount for specified year
			amount = principal * pow(1.0 + (float)rate/100, year); 

			// output one table row
			printf("%4u%21.2f\n", year, amount); 
		} // end for
		puts(" "); 
	} // end for 
} // end main 
