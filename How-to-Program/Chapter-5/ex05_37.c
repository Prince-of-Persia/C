// Tower of Hanoi solved iteratively
#include <stdio.h>
#include <math.h>

// function prototype
void hanoi(int number, int source, int dest, int spare); 

int main (void) {

	int number, source, dest, spare; 

	// Input values 
	printf("%s", "Enter number, source, dest, spare: ");
	scanf("%d%d%d%d", &number, &source, &dest, &spare); 

	// Pass through the function
	hanoi(number, source, dest, spare); 

} // end main

void hanoi(int number, int source, int dest, int spare) {

	int limit; // Number of moves required
	int swap;
	unsigned int i;  

	limit = pow(2, number) - 1; 

	if (number % 2 == 0) {
		swap = dest;
		dest = spare;
		spare = swap; 
	} // end if
	
	for (i = 1; i <= limit; ++i) {
		if (i % 3 == 0) {
			printf("%d -> %d\n", spare, dest); 
		} // end if
		else if (i % 3 == 1) {
			printf("%d -> %d\n", source, dest); 
		} // end else if
		else if (i % 3 == 2) {
			printf("%d -> %d\n", source, spare); 
		} // end else if 
	} // end for 
} // end hanoi 
