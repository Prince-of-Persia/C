// Calculate an employees salary based on their paycode
#include <stdio.h>

int main (void) {

	int paycode; // Paycode given to employee
	double salary; // Total salary

	int units; // Units produced 
	double hours; // Hours worked
	double rate; // Rate of pay per hour
	double sales; // Value of sales made 

	// Ask user for first paycode 
	printf("%s", "Enter a paycode: ");
	scanf("%d", &paycode);
	puts(" ");  

	while (paycode != EOF) {

		switch (paycode) {

			case 1: // Manager salary
			printf("%s", "Enter the manager's salary : ");
			scanf("%lf", &salary);

			printf("The manager's salary is %.2lf\n", salary); 
			break;

			case 2: // Hourly worker salary
			printf("%s", "Enter hours and hourly rate : ");
			scanf("%lf%lf", &hours, &rate); 

			if (hours > 40) {
				salary = 40 * rate + (hours - 40) * 1.5 * rate; 
			} // end if 
			else { 
				salary = hours * rate; 
			} // end else 

			printf("The hourly workers salary is %.2lf\n", salary); 
			break; 

			case 3: // Commission worker salary
			printf("%s", "Enter amount made in sales: ");
			scanf("%lf", &sales); 

			salary = 250 + 0.057 * sales; 
			printf("The commission worker's salary is %.2lf\n", salary);
			break; 

			case 4: // Pieceworker salary 
			printf("%s", "Enter the units sold and rate : ");
			scanf("%d%lf", &units, &rate); 

			salary = units * rate; 
			printf("The pieceworker's salary is %.2lf\n", salary); 
			break; 

			default:
			puts("Invalid number, try again"); 
			break;
			
		} // end switch

		printf("%s", "Enter a paycode : ");
		scanf("%d", &paycode); 

		puts(" ");
	} // end while 

} // end main
