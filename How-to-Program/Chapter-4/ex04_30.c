// Replace switch statement with a nested if...else statement
// Counting letter grades with switch
#include <stdio.h>

// function main begins program execution
int main (void) {

	int grade; // one grade
	unsigned int aCount = 0; // number of As
	unsigned int bCount = 0; // number of Bs 
	unsigned int cCount = 0; // number of Cs
	unsigned int dCount = 0; // number of Ds
	unsigned int fCount = 0; // number of Fs 

	puts("Enter the letter grades.");
	puts("Enter the E0F character to end input.");

	while ((grade = getchar() ) != EOF) {
		 
		// determine which grade was input
		if (grade == 'A' || grade == 'a') {
			++aCount; 
		} // end if
		else if (grade == 'B' || grade == 'b') {
			++bCount;
		} // end else if 
		else if (grade == 'C' || grade == 'c') {
			++cCount;
		} // end else if 
		else if (grade == 'D' || grade == 'd') {
			++dCount; 
		} // end else if  
		else if (grade == 'F' || grade == 'f') {
			++fCount; 
		} // end else if 

	} // end while 

	// output summary of results
	puts("\nTotals for each letter grade are:");
	printf("A: %u\n", aCount); // display number of A grades
	printf("B: %u\n", bCount); // display number of B grades
	printf("C: %u\n", cCount); // display number of C grades
	printf("D: %u\n", dCount); // display number of D grades
	printf("F: %u\n", fCount); // display number of F grades
} // end main


