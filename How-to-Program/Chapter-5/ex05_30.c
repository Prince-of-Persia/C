// Input a students average and return a value based on score
#include <stdio.h>

// function prototypes
int qualityPoints(double score); 

int main (void) {

	double score;
	int returnval; 

	// Input the users score
	printf("%s", "Enter the score: ");
	scanf("%lf", &score); 

	returnval = qualityPoints(score);
	printf("Return value is %d\n", returnval); 

} // end main

int qualityPoints(double score) {

	if (score < 60) {
		return 0; 
	} // end if
	else if (60 <= score && score < 70) {
		return 1;
	} // end else if
	else if (70 <= score && score < 80) {
		return 2; 
	} // end else if
	else if (80 <= score && score < 90) {
		return 3;
	} // end else if
	else {
		return 4; 
	} // end else

} // end qualityPoints
