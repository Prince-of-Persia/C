/*
(Differences between %d and %i) Develop a program to illustrate the
difference between the conversion specifiers %d and %i using in the scanf
statements. The following codes are used to input and display the values.
scanf( "%i%d", &x, &y );
printf( "%d %d\n", x, y );
Try the following sets as input data:
10 10
‐10 ‐10
010 010
0x10 0x10
*/
//import required libraries
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int x, y; //variables to hold the user input
	printf("Enter two integers\n");//ask user for input
	scanf( "%i%d", &x, &y ); //read the inputs
	printf( "%d %d\n", x, y ); //print the results
	return 0;
}