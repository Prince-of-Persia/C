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
	int size; // total number of grades 
	int sum; // sum of all weighted grades
	float mean; // average of all grades
	char mean_grade;

	puts("Enter the letter grades.");
	puts("Enter the E0F character to end input.");

	while ((grade = getchar() ) != EOF) {
		
		// determine which grade was input
		switch (grade) {
			
			case 'A': // grade was uppercase A
			case 'a': // or lowercase a
			++aCount; // increment aCount
			break; // necessary to exit switch 

			case 'B': // grade was uppercase B
			case 'b': // or lowercase b 
			++bCount; // increment bCount
			break; // exit switch

			case 'C': // grade was uppercase C
			case 'c': // or lowercase c
			++cCount; // increment cCount
			break; // exit switch

			case 'D': // grade was uppercase D
			case 'd': // or lowercase d
			++dCount; // increment dCount
			break; // exit switch

			case 'F': // grade was uppercase F
			case 'f': // or lowercase f
			++fCount; // increment fCount
			break; // exit switch 

			case '\n': // ignore newlines
			case '\t': // tabs
			case ' ': // and spaces in input
			break; 

			default: // catch all other characters
				printf("%s", "Incorrect letter grade entered.");
				puts("Enter a new grade.");
				break; // optional; will exit switch anyway;	
		} // end switch
	} // end while  

	// Calculate sample size, weighted sum, mean and mean_grade
	size = aCount + bCount + cCount + dCount + fCount; // total number
	sum = 4*aCount + 3*bCount + 2*cCount + dCount;

	mean = (float)sum/size; 

	if (mean == 4) {
		mean_grade = 'A'; 
	} // end if
	else if (mean >= 3 && mean < 4) {
		mean_grade = 'B';
	} // end else if
	else if (mean >= 2 && mean < 3) {
		mean_grade = 'C'; 
	} // end else if
	else if (mean >= 1 && mean < 2) {
		mean_grade = 'D'; 
	} // end else if
	else {
		mean_grade = 'F'; 
	} // end else	 

	// output summary of results
	puts("\nTotals for each letter grade are:");
	printf("A: %u\n", aCount); // display number of A grades
	printf("B: %u\n", bCount); // display number of B grades
	printf("C: %u\n", cCount); // display number of C grades
	printf("D: %u\n", dCount); // display number of D grades
	printf("F: %u\n", fCount); // display number of F grades

	printf("The average grade was %c\n", mean_grade); 
} // end main
