// Create a BMI calculator that reads the users weight and height
// and calculates and displays the BMI 
#include <stdio.h>

int main (void) {

	int height, weight;
	int bmi; 

	printf("Enter your height (m) and weight (kg) : ");
	scanf("%d %d", &height, &weight);
	printf("%d %d", height, weight);

	bmi = weight/(height*height); // BMI equation for metric

	printf("\nYour BMI is %d\n", bmi); 

	puts("BMI VALUES");
	puts("Underweight:\t\tless than 18.5");
	puts("Normal:\t\t\tbetween 18.5 and 24.9");
	puts("Overweight:\t\tbetween 25 and 29.9");
	puts("Obese:\t\t\t30 or greater"); 

}
