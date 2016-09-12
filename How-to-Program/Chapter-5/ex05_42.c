// 
#include <stdio.h>

int main (void) {

	int c; // hold character input from user

	if ((c = getchar() ) != EOF) {
		main();
		printf("%c", c); 
	} // end if

} // end main
