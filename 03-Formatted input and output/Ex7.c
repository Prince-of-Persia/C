/*
As communications channels are mostly noisy, the approach of checksum can be
used to check the data correctness. The checksum for a piece of data can be computed by
summing the integer codes of the data and computing the remainder of this sum by dividing
with 16. If the remainder is same as the last integer, the data is correct. Write a program that
inputs the data with 7 integers and displays the checksum for the data. The program continues
displaying checksums until the user enters all the 7 integers as zero.

This is an example of the checksum:
Data : 25 11 12 7 13 4 8, where the last integer, 8, performs the checksum.
Sum of the data: 72 = (25+11+12+7+13+4)
The remainder when dividing the sum by 16 is 8 which is equal to the checksum. Hence this
data is correct.

This is another example of the checksum:
Data : 24 11 12 7 13 4 8, where the last integer, 8, performs the checksum.
Sum of the data: 71 = (24+11+12+7+13+4)
The remainder when dividing the sum by 16 is 7 which is not equal to the checksum. Hence
this data is not correct.
*/
//import required libraries 
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int data [7], total = 0, checksum = 0, counter = 0; 
	char stat = 'y';
	while (stat == 'y')
	{
		for (counter = 0; counter < 7; counter += 1)// A loop to read the 7 integers
		{
			printf("Enter integer %d:", counter + 1);
			scanf ("%d", &data[counter]);//reads user inputs
		}
		checksum = data[6];// last entry is the checkSum
		for (counter = 0; counter < 6; ++counter)// A loop to add the integers 
		{
			total = total + data[counter];
		}
		if (total == 0)//exit if all entries were 0
		{
			stat = 'n';// change the stat
			break;			
		}
		else if (total % 16 == checksum)// if the remaider of total / 16 equales to checkSum
		{
			printf("The data is correct\n");
		}
		else
		{
			printf("The data is NOT correct\n");
		}
		//re-set variables
		total = 0;
		checksum = 0;
	}
	return 0;
}