// Calculate and print the parking charges of three customers
#include <stdio.h>

float calculateCharges(float hours); // function prototype

int main (void) {

	float car1hours, car2hours, car3hours; // Number of hours
	float car1charge, car2charge, car3charge; // Charge 
	float totalhours, totalcharge; // Total hours and total charge

	printf("%s", "Enter the hours for the three cars: ");
	scanf("%f%f%f", &car1hours, &car2hours, &car3hours); 

	// Display header of output table
	printf("%-3s%10s%10s\n", "Car", "Hours", "Charge"); 

	// Calculate the charges 
	car1charge = calculateCharges(car1hours);
	car2charge = calculateCharges(car2hours);
	car3charge = calculateCharges(car3hours); 

	totalhours = car1hours + car2hours + car3hours;
	totalcharge = car1charge + car2charge + car3charge; 

	// Display the values and total
	printf("%s%12.1f%10.1f\n", "1", car1hours, car1charge);
	printf("%s%12.1f%10.1f\n", "2", car2hours, car2charge);
	printf("%s%12.1f%10.1f\n", "3", car3hours, car3charge); 
 	printf("%-5s%8.1f%10.1f\n", "TOTAL", totalhours, totalcharge); 

} // end main 

float calculateCharges(float hours) {

	float charge;

	if (hours <= 3) {
		charge = 2;
	} // end if
	else if (hours == 24) {
		charge = 10; 
	} // end else if
	else {
		charge = 2 + 0.5 * (hours - 3); 
	} // end else

	return charge; 
} // end calculateCharges
