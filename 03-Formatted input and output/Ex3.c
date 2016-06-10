/*
Develop a program which simulates the calculator, where the calculator is involved with the following operators:
  + add
  - subtract
  * multiply
  / divide
  ^ power (raise lift operand to power of right operand) 
  q quit  
Initially the accumulator value of the program is set as zero. When the following command is performed,
the accumulator value is added by 5. Hence the program displays
 “Result so far is 5.0” as  5.0 + 
       Result so far is 5.0  
To develop the program, you may need to use scanf() to read the operator at the right hand side and the number at the left hand side. 
Each command line consists of the next operation to be performed. 
The program displays the accumulator value after each operation. When “0.0 q” is inputted to the program, 
the final accumulating value is displayed and the program is terminated. 
An example for the calculator is given as:  
	5.0 +
	Result so far is 5.0   
	2.0 ^ 
	Result so far is 25.0
	2.0 /    
	Result so far is 12.5        
	0.0 q     
	Final result is 12.5
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	char operand; // + - * / ^ q 
	double result = 0, x; // x = inputted number 

	printf("calculator\n");
	while	(operand != 'q')
	{
		 scanf("%lf %c", &x , &operand);//scan the number and the operant
		 switch (operand)
		 {
		 	case '+':
		 		result = result + x;
		 		break;
		 	case '-':
		 		result = result - x;
		 		break;
		 	case '*':
		 		result = result * x;
		 		break;
		 	case '/':
		 		result = result / x;
		 		break;
		 	case '^':
		 		result = pow (result, x);
		 		break;
		 			
		 }
		 printf("result so far is %.1lf\n", result);
	}
	printf("Final result is %.1lf\n", result);
	return 0;
}
