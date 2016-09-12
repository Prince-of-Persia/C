// Call the main function recursively
#include <stdio.h>

int main (void) {

	static int count = 1; 
	printf("%d\n", count++);
	main(); 

} // end main

