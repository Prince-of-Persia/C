/*

Design a program which uses a structure type to model an ideal transformer. The
transformer is developed with an iron core which is coiled with wires 1 and 2, where wire 1 is
coiled around the core N1 times and wire 2 is coiled around the core N2 times. When wire 1 is
connected to a source of alternating current, the voltage in wire 1 (the input voltage V1) and the
voltage in wire 2 (the output V2) are formulated by,
			
			(V_1/V_2) = (N_1/N_2)

The relationship between the input current I1 and the output current I2 is formulated by:
	
			(I_1/I_2) = (N_1/N_2)

The program includes the followings:
	- A structure type transformer_t includes N1, N2, V1 and I1.
	- Two functions, v_out and i_out, which compute the output voltage and the output
	current of a transformer respectively.
	- Two functions, scan_transformer and print_transformer facilitate input-output. We
	assume that N1 and N2 are the constants; V1 and V2 are the input variables; I1 and I2 are
	the output variables.
*/

#include <stdio.h>
#include <math.h>

typedef struct 
{
	double  N1,
			N2,
			V1,
			I1;	
} transformer_t;

transformer_t scan_transformer(transformer_t t);
double v_out (transformer_t t);
double i_out (transformer_t t);

int main(int argc, char const *argv[])
{
	double V2, I2;
	transformer_t transformer;

	//scan transformer
	transformer = scan_transformer(transformer);
	//calculate transformer
	V2 = v_out(transformer);
	I2 = i_out(transformer);
	//report the results
	printf("\n\n");
	printf("The output voltage is %lf\n\n",V2);
	printf("The output current is %lf\n\n",I2);	
	return 0;
}	

transformer_t scan_transformer(transformer_t t)
{
	printf("%s", "Enter the input voltage >");
	scanf("%lf", &t.V1);
	printf("%s", "Enter the input current >");
	scanf("%lf", &t.I1);
	printf("%s", "Enter the number of turns in first core >");
	scanf("%lf", &t.N1);
	printf("%s", "Enter the number of turns in second core >");
	scanf("%lf", &t.N2);
	return t;
}

double v_out (transformer_t t)
{
	double output_voltage;
	output_voltage = t.V1 * t.N1/t.N2;
	return output_voltage;
}

double i_out (transformer_t t)
{
	double output_current;
	output_current = t.I1 * t.N1/t.N2;
	return output_current;
}