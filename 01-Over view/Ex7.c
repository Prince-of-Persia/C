/*
Develop a program based on the for-loops to print the following patterns. All
asterisks (*) are printed by a single printf statement of the form printf(“*”).
*
**
***
****
*****
******
*******
********
*********
**********

**********
*********
********
*******
******
*****
****
***
**
*

**********
*********
********
*******
******
*****
****
***
**
*

*
**
***
****
*****
******
*******
********
*********
**********
*/

#include <stdio.h>
#include <stdlib.h>

void  main()
{
	int i, k;
	
	for (i = 1; i <= 10; i++)
	{
		for (k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		for (k = 10; k >= i; k--)
		{
			printf("*");
		}
		printf("\n");
	}	
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		for (k = 10; k >= i; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		for (k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}			
}