/*
Develop a program that determines the largest of several positive integers.
Assume that the first positive integer specifies the number of positive integers to be
inputted to the program.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i_count; //user input for unber of integers
	int *array; // an Array to store all integers
	int L_number; // to hold the lagest number entered by the user
	//the number of integerd the user is inputting
	printf("Enter the number of intergers to be entered: \n");
	scanf("%d", &i_count);
	//allocating the size of the array
	array = malloc (i_count * sizeof(int));
	//checks for a non-zero & positive number
	if (i_count > 0)
	{
		int counter = 0; //a counter to run the while loop x times
		while (counter < i_count)
		{
			printf("integer %d = ", counter + 1); //output the possition of the counter
			scanf("%d", &array[counter]); //reads the user input and stores in "a" array
			counter += 1; //incriment the counter
		}
		// consider the first element in array as the largest
		L_number = array[0];
		//a loop to compare each element against "L_number" 
		for (int i = 0; i < i_count; ++i)
		{
			if (array[i] > L_number) //if element i was greater than L_number
			{
				L_number = array[i]; //then element i is the greatest number in the array
			}
		}
		//print the results for user
		printf("The largest number you entered is %d.\n", L_number);
	} else {
		printf("The number entered is INVALIED!!!\n"); //debug statment (for user info)	
	}

	free (array); //
	return 0;
}

