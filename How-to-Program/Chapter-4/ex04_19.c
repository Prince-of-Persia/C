// Read product number and quantity sold, use a switch statement
// to calculate the total retail value of all products sold
#include <stdio.h>

int main (void) {

	unsigned int number, quantity, counter;
	float total = 0; 

	for (counter = 1; counter <= 5; ++counter) {

		printf("%s", "Enter the product number and quantity sold : ");
		scanf("%u%u", &number, &quantity); 

		switch (number) {
	
			case 1:
			total += quantity * 2.98;
			break;

			case 2:
			total += quantity * 4.50;
			break;

			case 3:
			total += quantity * 9.98; 
			break;

			case 4:
			total += quantity * 4.49;
			break; 

			case 5:
			total += quantity * 6.87;
			break; 

			default:
			puts("Enter a new number");
			break; 
		} // end switch
	} // end for 

	printf("The total value of all products sold was %.2f\n", total); 
} // end main
