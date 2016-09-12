// Print a table of all Roman numeral equivalents for numbers 1-100
#include <stdio.h>

int main (void) {

	unsigned int counter; 

	printf("%6s %15s\n", "Number", "Roman Number");
	printf("%7s%15s\n", "------  ", " --------------");


	for (counter = 1; counter <= 100; ++counter) {

		printf("%6d%s", counter, " "); 

		// Switch statement for tens place
		switch (counter / 10) {

			case 1:
			printf("%s", "X");
			break;

			case 2:
			printf("%s", "XX");
			break; 

			case 3:
			printf("%s", "XXX");
			break; 

			case 4:
			printf("%s", "XL"); 
			break;

			case 5:
			printf("%s", "L");
			break;

			case 6:
			printf("%s", "LX");
			break;

			case 7:
			printf("%s", "LXX");
			break;

			case 8:
			printf("%s", "LXXX");
			break;

			case 9:
			printf("%s", "XC");
			break;

			case 10:
			printf("%s", "C");
			break; 

		} // end switch

		// Second switch for remainder % 10
		switch (counter % 10) {

			case 1:
			printf("%s", "I");
			break;

			case 2:
			printf("%s", "II");
			break;

			case 3:
			printf("%s", "III");
			break;

			case 4:
			printf("%s", "IV");
			break;

			case 5:
			printf("%s", "V");
			break;

			case 6:
			printf("%s", "VI");
			break;

			case 7:
			printf("%s", "VII");
			break;

			case 8: 
			printf("%s", "VIII");
			break;

			case 9:
			printf("%s", "IX");
			break;

			case 10:
			printf("%s", "X");
			break; 

		} // end switch  
		puts(" ");	
	} // end for 

} // end main
