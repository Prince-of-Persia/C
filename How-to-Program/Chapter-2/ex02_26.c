// Reads in two integers and determines whether
// the first integer is a multiple of the second integer
#include <stdio.h>

int main (void) {

	int x, y; 

	printf("Enter two integers : ");
	scanf("%d%d", &x, &y); 

	if ((x % y) == 0) {
		printf("%d is a multiple of %d\n", x, y); 
	}
	if ((x % y) != 0) {
		printf("%d is not a multiple of %d\n", x, y);
	}
}
