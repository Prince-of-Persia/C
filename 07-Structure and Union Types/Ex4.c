/*
Develop a program that takes a measurement in one unit (e.g. 4.5 quarts) and
converts it to another unit (e.g. liters). The following converts 450 km into miles.

Enter a conversion problem or q to quit.
> 450 Km Mi
Convert 450.0000 Km to Mi …
450.0000 Km = 279.6247 Mi


To develop the program, the following information may be used:
Miles 		Mi 		distance 		1609.3 M
Kilometers 	Km 		distance 		1000 M
Yards 		Yd 		distance 		0.9144 M
Meters 		M 		distance 		1 M
Quarts 		Qt 		liquid_volume 	0.94635 L
Liters 		L 		liquid_volume 	1 L
Gallons 	Gal 	liquid_volume 	3.7854 L
Milliliters Ml 		liquid_volume 	0.001 L
Kilograms 	Kg 		mass 			1 kg
Grams 		G 		mass 			0.001 kg
Slugs 		Slugs 	mass 			0.14594 kg
Pounds 		Lb 		mass 			0.43592 kg
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
 

struct unit {
      char distance[10]; char liquid_volume[10]; char mass[10];
};

struct ratio {
      double distance; double liquid_volume; double mass;
};

struct input {
      double value; char first_unit[10]; char second_unit[10];
};

struct input split(char word[]);

int check(char first_unit[], char second_unit[], double value);

char first_unit[10], second_unit[10];
double *value;
struct unit Data_unit[4];
struct ratio Data_ratio[4];
int main(void)
{
	char word[40];
	struct input split_word; 
	int outcome;
	
	strcpy(Data_unit[0].distance,"Mi");
	strcpy(Data_unit[1].distance,"Km");
	strcpy(Data_unit[2].distance,"Yd");
	strcpy(Data_unit[3].distance,"M");

	strcpy(Data_unit[0].liquid_volume,"Qt");
	strcpy(Data_unit[1].liquid_volume,"L");
	strcpy(Data_unit[2].liquid_volume,"Gal");
	strcpy(Data_unit[3].liquid_volume,"Ml");

	strcpy(Data_unit[0].mass,"Kg");
	strcpy(Data_unit[1].mass,"G");
	strcpy(Data_unit[2].mass,"Slugs");
	strcpy(Data_unit[3].mass,"Lb");

	Data_ratio[0].distance=1609.3;
	Data_ratio[1].distance=1000;
	Data_ratio[2].distance=0.9144;
	Data_ratio[3].distance=1;

	Data_ratio[0].liquid_volume=0.94635;
	Data_ratio[1].liquid_volume=1;
	Data_ratio[2].liquid_volume=3.7854;
	Data_ratio[3].liquid_volume=0.001;

	Data_ratio[0].mass=1;
	Data_ratio[1].mass=0.001;
	Data_ratio[2].mass=0.14594;
	Data_ratio[3].mass=0.43592;

	printf("Enter a conversion problem or q to quit.\n");
	printf(">");
	gets(word);
	while (strcmp(word,"q") != 0)
	{
		split_word=split(word);
		outcome=check(split_word.first_unit,split_word.second_unit,split_word.value);
		printf("Enter a conversion problem or q to quit.\n");
		printf(">");
		gets(word);
	}
	return (0);
}


struct input split(char word[])
{
   	struct input split_word;
	sscanf(word,"%lf %s %s",&split_word.value,split_word.first_unit,split_word.second_unit);
	return split_word;
}

int check(char first_unit[], char second_unit[],double value)
{
	// '1' represents this is in distance
	// '2' represents this is in volume
	// '3' represents this is in mass
	// '4' represents this is not match
	int i,first,second,outcome;
	int column1,column2;
	for (i=0;i<4;i++)
	{
        outcome=4;
		if (strcmp(first_unit,Data_unit[i].distance)==0)
		{
			first=1;column1=i;
		}
		else if (strcmp(first_unit,Data_unit[i].liquid_volume)==0)
		{
			first=2;column1=i;
		}
		else if (strcmp(first_unit,Data_unit[i].mass)==0)
		{
			first=3;column1=i;
		}

		if (strcmp(second_unit,Data_unit[i].distance)==0)
		{
			second=1;column2=i;
		}
		else if (strcmp(second_unit,Data_unit[i].liquid_volume)==0)
		{
			second=2;column2=i;
		}
		else if (strcmp(second_unit,Data_unit[i].mass)==0)
		{
			second=3;column2=i;
		}
		if (first!=second)
			outcome=4;
		else
		{
			outcome=first;
		}
	}
	if (outcome==1)
		printf("%.4f %s = %.4f %s \n",value,Data_unit[column1].distance,value*(Data_ratio[column2].distance/Data_ratio[column1].distance),Data_unit[column2].distance);
	else if (outcome==2)
		printf("%.4f %s = %.4f %s \n",value,Data_unit[column1].liquid_volume,value*(Data_ratio[column2].liquid_volume/Data_ratio[column1].liquid_volume),Data_unit[column2].liquid_volume);
	else if (outcome==3)
		printf("%.4f %s = %.4f %s \n",value,Data_unit[column1].mass,value*(Data_ratio[column2].mass/Data_ratio[column1].mass),Data_unit[column2].mass);
	else if (outcome==4)
		printf("Cannot convert %s to %s",first_unit,second_unit);
	return (outcome);
}


