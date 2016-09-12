// Input a 5 digit number, separate into individual digits
// and print the digits separated from one another by three spaces each
#include <stdio.h>

int main (void) {

	int x; 

	printf("Enter a 5 digit number: ");
	scanf("%d", &x);

	printf("%d   %d   %d   %d   %d\n", 
		(x/10000), (x/1000)%10, (x/100)%10, (x/10)%10, x%10); 

}
