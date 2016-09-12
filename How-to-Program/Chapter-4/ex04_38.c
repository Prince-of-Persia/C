// Print the Twelve Days of Christmas song
#include <stdio.h>

int main (void) {

	unsigned int day, counter;  

	for (day = 1; day <= 12; ++day) {

		printf("%s", "On the ");

		switch (day) { // On the x'th day of Christmas

			case 1:
			printf("%s", "first");
			break; 

			case 2:
			printf("%s", "second");
			break;

			case 3:
			printf("%s", "third");
			break;

			case 4:
			printf("%s", "fourth");
			break; 

			case 5:
			printf("%s", "fifth"); 
			break;

			case 6:
			printf("%s", "sixth");
			break;

			case 7:
			printf("%s", "seventh");
			break;

			case 8:
			printf("%s", "eighth");
			break;

			case 9:
			printf("%s", "ninth");
			break;

			case 10:
			printf("%s", "tenth");
			break;

			case 11:
			printf("%s", "eleventh");
			break;

			case 12:
			printf("%s", "twelfth");
			break; 

		} // end switch

		puts(" day of Christmas, my true love gave to me : ");  

		for (counter = day; counter >= 1; --counter) {

			switch (counter) {

				case 1:
				printf("%s","A partridge in a pear tree");
				break;				

				case 2:
				printf("%s","Two turtle doves");
				break;

				case 3:
				printf("%s","Three French hens");
				break;

				case 4:
				printf("%s","Four calling birds");
				break;

				case 5:
				printf("%s","Five golden rings");
				break; 

				case 6:
				printf("%s","Six geese a laying");
				break;

				case 7:
				printf("%s","Seven swans a swimming");
				break;

				case 8:
				printf("%s","Eight maids a milking");
				break;

				case 9:
				printf("%s","Nine ladies dancing");
				break;

				case 10:
				printf("%s","Ten lords a leaping");
				break;

				case 11:
				printf("%s","Eleven pipers piping");
				break;

				case 12:
				printf("%s","Twelve drummers drumming");
				break; 

			} // end switch 
			puts(" "); 
		} // end for
		puts(" ");
 
	} // end for 


} // end main 
