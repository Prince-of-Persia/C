// Print a diamond where the user can input a number of rows
// between 1 and 19
#include <stdio.h>

int main (void) {

	unsigned int rows, counter, spaces, stars, centre, revcount;  
	int starcount, spacecount, printcount; 

	printf("%s", "Enter the number of rows : ");
	scanf("%u", &rows);

	if (rows <= 19 && (rows % 2 != 0) && rows >= 1) { // Validate odd number as well
 
		centre = (rows - 1)/2 + 1; // Integer value of the centre row 

		for (counter = 1; counter <= rows; ++counter) {
			if (counter == centre) { // Centre row of diamond 
				for (stars = 1; stars <= rows; ++stars) {
					printf("%s", "*"); 
				} // end for 
			} // end if 	
			else {
				if (counter < centre) { // Top half of diamond
					starcount = 2 * counter - 1;
					spacecount = (rows - starcount) / 2; 
				} // end if
				else if (counter > centre) { // Bottom half of diamond
					revcount = (rows - counter) + 1; 
					// The same number of stars were seen revcount rows ago
					starcount = 2 * revcount - 1; 
					spacecount = (rows - starcount) / 2; 
				} // end else if  

				for (printcount = 1; printcount <= 3; ++printcount) {
					if (printcount == 2) { // Print array of stars in row
						for (stars = 1; stars <= starcount; ++stars) {
							printf("%s", "*"); 
						} // end for 
					} // end if 
					else { // Print spaces in row 
						for (spaces = 1; spaces <= spacecount; ++spaces) {
							printf("%s", " "); 
						} // end for 
					} // end else 
				} // end for 
			} // end else 
			puts(" "); 
		} // end for 
	} // end if 

} // end main
