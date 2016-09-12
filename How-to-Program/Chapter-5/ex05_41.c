// Calculate distance between (x1, y1) and (x2, y2) 
#include <stdio.h>
#include <math.h>

// function prototype
double distance(double dx, double dy); 

int main (void) {

	double x1, x2, y1, y2; 
	double dx, dy, length; 	

	// Input the two sets of coordinates
	printf("%s", "Enter (x1, y1): ");
	scanf("%lf%lf", &x1, &y1);

	printf("%s", "Enter (x2, y2): ");
	scanf("%lf%lf", &x2, &y2);  

	// Calculate distance between like coordinates
	dx = x2 - x1;
	dy = y2 - y1; 

	length = distance(dx, dy); 
	printf("Distance between (%.2lf, %.2lf) and (%.2lf, %.2lf) is %.2lf\n", x1, y1, x2, y2, length); 
} // end main

double distance(double dx, double dy) {

	double length;

	length = sqrt(dx*dx + dy*dy); 

	return length; 
} // end distance
