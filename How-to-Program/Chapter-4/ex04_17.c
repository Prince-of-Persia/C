// Input account number, credit limit, and balance
// Print new credit limit for each customer and determine whether
// their current balances exceed their credit limit
#include <stdio.h>

int main (void) {

	unsigned int number, counter; // Account number and loop counter
	float limit, balance; // Credit limit and current balance

	for (counter = 1; counter <= 3; ++counter) {
		
		printf("%s", "Enter number, credit limit and balance : ");
		scanf("%u%f%f", &number, &limit, &balance); 

		printf("The new credit limit is %.2f\n", limit/2); 

		if (balance > limit/2) {
			printf("Account %u has exceeded their credit limit\n", number);
		} // end if	

		puts(" "); 
	} // end for

} // end main
