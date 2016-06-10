/*
Write a program that reads three nonzero real numbers and determines and if
they can be used to as the dimensions of a right-angled triangle. The
program could interact as follows:
Enter three integers: 3 4 5
The three integers are the sides of a right triangle
Enter three integers: 9 4 1
The three integers are not the sides of a right triangle
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int a,b,c;// variables to store user input
	printf("Enter right-angled triangle sides: \n");
	scanf("%d %d %d", &a, &b, &c);//reads the user input and stores in corresponding variables
	//checks for numbers entered are non zero and positive
	if (a > 0 && b > 0 && c > 0){
		// apply Pythagoras' Theorem 
		if(pow(a,2) + pow(b,2) == pow(c,2)){
			printf("The three integers are the sides of a right-angled triangle\n");
		} else if (pow(a,2) + pow(b,2) != pow(c,2)){
			printf("The three integers are NOT the sides of a right-angled triangle\n");
		}

	}
}


