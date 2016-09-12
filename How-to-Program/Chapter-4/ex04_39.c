// Determine the population growth after 75 years using the current growth rate
// Population = 7.4 billion, Growth Rate = 1.13%
#include <stdio.h>

int main (void) {

	unsigned int year;
	double rate;
	long int population, difference; 

	population = 7400000000; 
	rate = 1.0113; 

	printf("%6s%14s%14s\n", "Year", "Population", "Difference");
	printf("%36s\n", "------------------------------------");

	for (year = 1; year <= 75; ++year) {
		
		population *= 1.0113;
		
		difference = population - (population/1.0113);  

		printf("%6u%14li%14li\n", year, population, difference); 
	} // end for 

} // end main
