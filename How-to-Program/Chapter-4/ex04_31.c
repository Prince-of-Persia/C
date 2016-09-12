// Print a diamond shape 
#include <stdio.h>

int main (void) {

	unsigned int counter, printcount, spaces, stars; 
	int spacecount, starcount; 

	for (counter = 1; counter <= 9; ++counter) {
		if (counter == 5) {
			for (stars = 1; stars <= 9; ++stars) {
				printf("%s", "*"); 
			} // end for 
			puts(" "); 
		} // end if 
		else {
			if (counter < 5) {
				starcount = 2 * counter - 1;
				spacecount = (9 - starcount) / 2; 
			} // end if
			else if (counter > 5) {
				spacecount = counter - 5;
				starcount = 9 - 2 * spacecount; 
			} // end if

			for (printcount = 1; printcount <= 3; ++printcount) {
				if (printcount == 2) {
					for (stars = 1; stars <= starcount; ++stars) {
						printf("%s", "*"); 
					} // end for 
				} // end if 
				else {
					for (spaces = 1; spaces <= spacecount; ++spaces) {
						printf("%s", " "); 
					} // end for 
				} // end else 
			} // end for  
			puts(" ");
		} // end else 
	} // end for
} // end main 
