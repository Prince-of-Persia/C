// Create a program to solve the Tower of Hanoi problem
#include <stdio.h>

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

	if (number == 1) {
		printf("%d -> %d\n", source, dest); 
		return; 
	} // end if
	else {
		hanoi(number - 1, source, spare, dest);
		printf("%d -> %d\n", source, dest); 
		hanoi(number - 1, spare, dest, source); 
	} // end else

} // end hanoi 
