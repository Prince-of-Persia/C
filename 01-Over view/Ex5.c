/*
Write a program that takes the x-y coordinates of a point in the Cartesian
plane and displays a message telling either an axis on which the point lies or the
quadrant in which it is found. Sample lines of output are
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
	float x, y;
	printf("Enter the co-ordinates \n");
	scanf("%f %f", &x, &y);

	if (x == 0 && y == 0)
	{
		printf("(%f,%f) is the origin",x ,y);
	} else if (y == 0)
	{
		printf("(%f,%f) is on the x axis",x ,y);
	} else if (x == 0)
	{
		printf("(%f,%f) is on the y axis",x ,y);
	} else if (x < 0 && y > 0)
	{
		printf("(%f,%f) is in quadrant IV",x ,y);
	}else if (x < 0 && y < 0)
	{
		printf("(%f,%f) is in quadrant III",x ,y);
	}else if (x > 0 && y < 0)
	{
		printf("(%f,%f) is in quadrant II",x ,y);
	}else if (x > 0 && y > 0)
	{
		printf("(%f,%f) is in quadrant I",x ,y);
	}

}