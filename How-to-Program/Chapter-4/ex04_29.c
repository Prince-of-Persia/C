// Using DeMorgan's Laws, write equivalent logical expressions
// !(a && b) == (!a || !b)
// !(a || b) == (!a && !b) 
#include <stdio.h>

int main (void) {

	int x = 5, y = 2, z = 4; 

	// Example 1
	if ((!(x < 5) && !(y >= 7)) == !((x < 5) || (y >= 7))) {
		puts("Expression a is true");
	} // end if
	else {
		puts("Expression a is false"); 
	} // end else

	// Example 2
	if ((!(x == y) || !(z != 5)) == (!((x == y) && !(z != 5) ))) {
		puts("Expression b is true");
	} // end if 
	else {
		puts("Expression b is false"); 
	} // end else

	// Example 3
	if ((!((x <= 8) && (y > 4))) == (!(x <= 8) || !(y > 4))) {
		puts("Expression c is true");
	} // end if 
	else {
		puts("Expression c is false"); 
	} // end else

	// Example 4 
	if ((!((x > 4) && (y <= 6))) == (!((x > 4) && (y <= 6)))) {
		puts("Expression d is true");
	} // end if
	else {
		puts("Expression d is false"); 
	} // end else
} // end main
