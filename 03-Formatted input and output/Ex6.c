/*
Develop a program that generate 5 integers randomly from 1 to 1000. 
For each integer, the program displays the integer value and the number of digits generated so far. 
The program output is represented in the following format, where there are 5 empty spaces between ‘Value’ and ‘Total characters’:  
Value   
 Total Characters 
  342    3 
  1000   7  
  8  	 8  
  90   	 10  
  100    13
*/
//import required libraries  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function prototype
int nIntegers (int number);


int main(void)
{
	int total, characters = 0, counter = 0;
	//write the headers
	printf("Total \t Characters\n");
	srand(time(NULL));
	while (counter <= 5)//to generate 5 numbers
	{
		srand(counter * 2 +time(NULL));
      	total = 1 + (rand() % 1000); //generate a number between 1 and 1000 
      	characters = characters + nIntegers(total);
      	printf("%d \t %d\n", total, characters);
      	total = 0;
      	counter ++; //incriment counter after each loop
   	}
   	return 0;
}

/*
int nIntegers (int number)
{
	if (number <= 9){
		return 1;
	}
	else if (number <= 99)
	{
		return 2;
	}
	else if (number <= 999)
	{
		return 3;
	}
	else 
	{
		return 4;
	}
}
*/
int nIntegers (int number)
{
	int counter = 0;
	while ( number != 0)
	{
		number /= 10;
		counter ++;
	}
	return counter;
}
