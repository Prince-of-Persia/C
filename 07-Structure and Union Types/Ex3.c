/*
A complex number consists of a real part and an imaginary part. For example,
the complex number a + bi consists of a real part a and an imaginary part b , where the
symbol i represents root(-1).

	Develop a program to perform two basic arithmetic operations for two complex
numbers (addition and subtraction) and the absolute value operation of a complex number.

The absolute value operation is given by:

	|a + bj| = root (a^2 + b^2)

The following is an illustration of the program:
	Enter the real and imaginary parts of a complex number
	separated by a space > 3.5 5.2
	Enter a second complex number > 2.5 1.2
	These are the outcomes >
	(3.50 + 5.20 i) + (2.50 + 1.20 i) = (6.00 + 6.40 i)
	(3.50 + 5.20 i) ‐ (2.50 + 1.20 i) = (1.00 + 4.00 i)
	|(3.50 + 5.20 i)| = (6.27)	
*/

#include <stdio.h>
#include <stdlib.h>	
#include <math.h>

typedef struct 
{
	double  real, 
			imaginary;
}complex;

complex addition (complex num1, complex num2);
complex subtraction (complex num1, complex num2);
double absolute(complex num);

int main(int argc, char const *argv[])
{
	complex x1, x2, total_addition, total_subtraction;
	double x1_abs, x2_abs;
	//get user input
	printf("%s\n", 
		"Enter the real and imaginary parts of the first complex number.\nseparated by a space >");
	scanf("%lf %lf", &x1.real, &x1.imaginary);
	printf("%s\n", 
		"Enter the real and imaginary parts of the second complex number.\nseparated by a space >");
	scanf("%lf %lf", &x2.real, &x2.imaginary);
	//calculate addition and subtraction
	total_addition    = addition    (x1, x2);
	total_subtraction = subtraction (x1, x2);
	x1_abs = absolute (x1);
	x2_abs = absolute (x2);
	//report the results
	printf("(%.2lf + %.2lf i) + (%.2lf + %.2lf i) = %.2lf + %.2lf i\n", 
		x1.real,
		x1.imaginary,
		x2.real,
		x2.imaginary,
		total_addition.real,
		total_addition.imaginary);
	printf("(%.2lf + %.2lf i) - (%.2lf + %.2lf i) = %.2lf + %.2lf i\n", 
		x1.real,
		x1.imaginary,
		x2.real,
		x2.imaginary,
		total_subtraction.real,
		total_subtraction.imaginary);
	printf("|%.2lf + %.2lf i| = %.2lf\n", 
		x1.real,
		x1.imaginary,
		x1_abs);
	printf("|%.2lf + %.2lf i| = %.2lf\n", 
		x2.real,
		x2.imaginary,
		x2_abs);
	return 0;
}	

complex addition (complex num1, complex num2)
{
	complex total;
	total.real = num1.real + num2.real;
	total.imaginary = num1.imaginary + num2.imaginary;
	return total;
}

complex subtraction (complex num1, complex num2)
{
	complex total;
	total.real = num1.real - num2.real;
	total.imaginary = num1.imaginary - num2.imaginary;
	return total;	
}

double absolute(complex num)
{
	double total;
	total = sqrt(pow(num.real, 2) + pow(num.imaginary, 2));
	return total;
}