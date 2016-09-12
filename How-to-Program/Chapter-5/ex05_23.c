// Input the time as three integers: hours, minutes and seconds
// Calculate the amount of time in seconds since the time was 12:00:00 
#include <stdio.h>

int timeCalculate(int hours, int minutes, int seconds); // function prototype

int main (void) {

	unsigned int hours, minutes, seconds;
	int total_seconds; 

	// Ask the user for times
	printf("%s", "Enter hours, minutes and seconds: ");
	scanf("%u%u%u", &hours, &minutes, &seconds); 

	// Calculate the time in seconds since 12:00:00
	timeCalculate(hours, minutes, seconds); 
} // end main

int timeCalculate(int hours, int minutes, int seconds) {

	int total_seconds;
	
	if (hours == 12 && minutes == 0 && seconds == 0) {
		total_seconds = 0; 
	} // end if 
	else {
		total_seconds = hours * 3600 + minutes * 60 + seconds; 
	} // end else
	printf("Since 12:00:00 there have been %d seconds\n", total_seconds); 

} // end timeCalculate
