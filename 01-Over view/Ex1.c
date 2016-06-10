/*
	How can you determine how fast your own computer really operates? Write
	a program with a while loop that counts from 1 to 1,000,000,000 by 1. Every time
	the count reaches a multiple of 200,000,000, print that number on the screen. Use
	the function clock() to time how long 1 billion repetitions of the loop take.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int a = 1;
	clock_t start_t, end_t;
	double total_t;
	//read the clock
	start_t = clock();
	printf("Going to scan a big loop, start_t = %ld\n", start_t);
	while(a <= 1000000000)
	{
		if ((a%200000000) == 0)
		{
			printf("%d \n", a);
		}
		a = a + 1; 
	}
	//read the clock again after the loop 
	end_t = clock();
   	printf("End of the big loop, end_t = %ld\n", end_t);
   	//calculation of the total time taken by the CPU in Seconds
   	total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
   	printf("Total time taken by CPU: %f\n", total_t);
}