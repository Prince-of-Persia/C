/*
	The Open School admits children to its kindergarten in the order in which they apply.
	However, the list of applicants is easier to be handled if it is in alphabetical order. Develop a
	program which uses an input list of names reflecting the order in which applications were
	received. The program creates a set of pointers for the name list and sorts the list in
	alphabetical order. The screen shall create the following:

	Enter number of applicants (0 . . 50)
	> 5
	Enter names of applicants on separate lines:
	In the order in which they applied
	SADDLER, MARGARET
	INGRAM, RICHARD,
	FAATZ, SUSAN
	GONZALES, LORI
	KEITH, CHARLES
	
	Alphabetical Order:
	FAATZ, SUSAN
	GONZALES, LORI
	INGRAM, RICHARD
	KEITH, CHARLES
	SADDLER, MARGARET
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define columns 50
char **applicants;// 2D array to store applicants' names
int main(int argc, char const *argv[])
{
	int rows = 0;
	printf("Enter the number of applicants:\n");
	scanf("%d", &rows); //read the user input
	char *t;
	// debug user input
	while (rows <= 0)
	{
		printf("Invalid entry!!!\nEnter the number of applicants:\n");
		scanf("%d", &rows);
	}
	// memory allocation
	t = malloc (rows *sizeof(char));
	applicants = malloc (rows * sizeof(char*));
	for (int i = 0; i < rows; ++i)
	{
		applicants[i] = malloc (columns * sizeof(char));
	}
	printf("Enter names of applicants on separate lines.\nIn the order in which they applied (eg. smith,john):\n");
	while(getchar() != '\n');// flush buffer
	for (int i = 0; i < rows; ++i)// read user entries
	{
		fgets ((applicants[i]), columns, stdin);
	}
	//sorting algorithem
	for (int i = 1; i < rows; ++i)
	{
		for (int j = 1; j < rows; ++j)
		{
			if (strcmp(applicants[j-1],applicants[j]) > 0)
			{
				strcpy(t, applicants[j-1]);
				strcpy(applicants[j-1], applicants[j]);
				strcpy(applicants[j], t);
			}
		}
	}
	//report the result back to user
	printf("Your enteries are:\n");
	for (int i = 0; i < rows; ++i)
	{
		printf("%d\t%s", i + 1, strupr(applicants[i]));
	}	

	return 0;
}
