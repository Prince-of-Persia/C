/*
What does the following programming segment do? Redevelop the following
using the ‘while’ – loop.

void main()
{
	for (int i = 1; i <= 5; ++i)
	{
		for (int j = 1; j <= 3; ++j)
		{
			for (int k = 1; k <= 4; ++k)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}
}
*/
#include <stdio.h>
void main()
{
	int i = 1, j =1, k =1;
	while(i <= 5)
	{
		while (j <= 3)
		{
			while(k <= 4)
			{
				printf("*");
				k = k + 1;
			}
			printf("\n");
			j = j + 1;
			k = 1;
		}
		printf("\n");
		i = i + 1;
		j = 1;
		//k = 1;
	}
}