/*
	Develop a program in order to determine how long a battery can be operated on
an electrical device, where the battery needs to supply an electrical device with a particular
amount of current (amps).

	In the program, we need to create a structure type namely battery_t, to represent the
battery variables
	- Battery voltage
	- Amount of energy that the battery is capable of storing
	- Amount of energy currently storing (in joules) in the battery.

	In the program, we need to define three functions namely power_device, max_time, and
recharge.

power_device attempts to determine the following:
	- power_device determines whether the battery’s energy reserve is adequate to power
	the device for the prescribed time.
	- If the energy reserve is adequate, power_device updates the battery’s energy reserve
	by subtracting the energy consumed and informs the users by returning a true message.
	- If the energy reserve is NOT adequate, power_device leaves the energy reserve unchanged
	and informs the users by returning a false message.

max_time:
	uses the battery variables represented by battery_t and the current of an
	electrical device as the function input. It computes the number of seconds that the battery
	can operate the device before it is fully discharged. max_time does not attempt to
	change any battery variables.

recharge:
	attempts to reset the amount of energy currently stored in the battery to be the
	amount of energy that the battery is capable of storing.
*/

/*
	the battery variables are hardcoded for now.
	a better menu driven user interface can be written later
*/
#include <stdio.h>
#include <stdlib.h>	

//typedwf structure to store battery values
typedef struct 
{	
	double  voltage,
			energy_limit,
			energy_available;
	int dec;

} battery_t;

battery_t bat; // 'bat' a variable type battry_t

double t_connected;
double device_current;

//Function prototype
battery_t power_device(battery_t b, double t, double I);
double max_time(battery_t b, double t, double I);
battery_t recharge(battery_t b);

int main(int argc, char const *argv[])
{
	double operating_time, operating_current;
	double discharge_time;
	//ask user for battery info
	printf("%s", "Enter battery voltage > ");
	scanf("%lf", &bat.voltage);
	printf("%s", "Enter power rating of the battery (in joules) > ");
	scanf("%lf", &bat.energy_limit);
	printf("%s", "What is battery’s available energy (in joules) > ");
	scanf("%lf", &bat.energy_available);
	printf("%s", "What is operating time (in seconds) > ");
	scanf("%lf", &operating_time);
	printf("%s", "What is operating current (int amps) > ");
	scanf("%lf", &operating_current);

	/****** start calculation *******/
	bat = power_device (bat, operating_time, operating_current);
	printf("\n\nthe outcome is %d\n",bat.dec);
	printf("the updated energy is %f\n\n\n",bat.energy_available);
	
	discharge_time = max_time(bat, operating_time, operating_current);
	printf("%s%f\n", "Discharge time with current load:\n", discharge_time);
	bat = recharge (bat);
	discharge_time = max_time(bat, operating_time, operating_current);
	printf("%s%f\n", "Discharge time after the battery is fully recharged:\n", 
		discharge_time);
	//debug
	//printf("%f %f %f\n", bat.voltage, bat.energy_limit, bat.energy_available);
	return 0;
}	


battery_t power_device(battery_t b, double t, double I)
{	
	if (b.energy_available>(t*I)){
		b.dec=1;
		b.energy_available=b.energy_available-t*I;
	}
	else
	{
		b.dec=0;
	}
	return (b);
}

double max_time(battery_t b, double t, double I)
{
	double time_discharged;
	time_discharged=b.energy_available/(I*t*b.voltage);
	return (time_discharged);
}

battery_t recharge(battery_t b)
{
	b.energy_available=b.energy_limit;
	return (b);
}