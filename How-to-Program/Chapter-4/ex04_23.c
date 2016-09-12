// Calculating compound interest 
#include <stdio.h>
#include <math.h>

// function main begins program execution
int main (void) {

	unsigned int amount; // amount on deposit
	unsigned int principal = 100000; // starting principal (cents)
	unsigned int rate = 105; // annual interest rate
	unsigned int year; // year counter

	// output table column heads
	printf("%4s%21s\n", "Year", "Amount on deposit");

	// calculate amount on deposit for each of ten years
	for (year = 1; year <= 10; ++year) {
		
		// calculate new amount for specified year
		amount = principal * pow(rate, year)/pow(100,year); 

		// output one table row
		printf("%4u%21u.%.2u\n", year, amount/100, amount%100); 
	} // end for 
} // end main
