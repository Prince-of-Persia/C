#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//arrays and matrices
float **female_life_expectancy, **male_life_expectancy, **difference;
int *year;
int rows, columns;//number of rows and columns
int y = 1, min_year, max_year;//year numbers
//function prototype
int nDecade (float max, float min);
void matrix_diff (float **a, float **b);
void main ()
{
	printf("Enter the start year:\n");//user input
	scanf("%d", &min_year);
	printf("Enter the end year:\n");//user input
	scanf("%d", &max_year);
	y = nDecade (max_year, min_year);//number of decades between two years
	//report the results back to user
	printf("There are %d decades between %4.0d and %4.0d\n", y, min_year, max_year);
	columns = 2; //there are 2 categories
	//allocating the arrays dimations
	rows = y + 1;
	female_life_expectancy = malloc (rows  * sizeof(float*));
	male_life_expectancy   = malloc (rows  * sizeof(float*));
	difference			   = malloc (rows  * sizeof(float*));
	year 				   = malloc (y * sizeof(int));
	for (int i = 0; i < rows; ++i)
	{
		female_life_expectancy[i] = malloc (columns * sizeof(float));
		male_life_expectancy[i]	  = malloc (columns * sizeof(float));
		difference[i]             = malloc (columns * sizeof(float));
	}
	//user input for female life expectancy
	printf("Enter female life expectancy between %4d & %4d\n", min_year, max_year);
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			scanf("%f", &female_life_expectancy[i][j]);
		}
	}
	//user input for male life expectancy
	printf("Enter male life expectancy between %4d & %4d\n", min_year, max_year);
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			scanf("%f", &male_life_expectancy[i][j]);
		}
	}
	//assigning values to array "year" 
	for (int i = 0; i < rows; ++i)
	{
		year[i] = min_year;
		min_year += 10;
	}
	//feedback female tale
	printf("female life expectancy:\nYear: \tBlack: \tWhite:\n");
	for (int i = 0; i < rows; ++i)
	{
		printf("%5d\t", year[i]);
		for (int j = 0; j < columns; ++j)
		{
			printf("%6.2f\t", female_life_expectancy[i][j]);
		}
		printf("\n");
	}
	//feedback male tale
	printf("male life expectancy:\nYear: \tBlack: \tWhite:\n");
	for (int i = 0; i < rows; ++i)
	{
		printf("%5d\t", year[i]);
		for (int j = 0; j < columns; ++j)
		{
			printf("%6.2f\t", male_life_expectancy[i][j]);
		}
		printf("\n");
	}
    printf("Difference:\nYear: \tBlack: \tWhite:\n");
  	matrix_diff(female_life_expectancy, male_life_expectancy);	

}
int nDecade(float max, float min)
{
	int x;
	x = (max - min)/10;
	return x;
}
void matrix_diff (float **a, float **b)
{
  for (int i = 0; i < rows; ++i)
  {
    printf("%5d\t", year[i]);
    for (int j = 0; j < columns; ++j)
    {
      difference [i][j] = a [i][j] - b [i][j]; 
      printf("%6.1f\t", difference [i][j]);  
    }
    printf("\n");
  } 
}