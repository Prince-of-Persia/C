/*
	Function pointers are commonly applied on text-based menu-driven systems. A user is
	prompted to select an option from a menu (possibly from 1 to 5) by typing an item number on
	the menu. A different option can be referred to a different function. Pointers to each function
	are stored in an array of function pointers. A user choses a subscript in the array, and the
	pointer in the array is used to call the function.

	The program provides a generic example of the mechanics of defining and
	using an array of pointers to functions. We define three functions - function1, function2 and
	function3 - that each take an integer argument and return nothing. We store pointers to these
	three functions in array f, which is defined in line 12. The definition is read beginning in the
	leftmost set of parentheses, “f is an array of 3 pointers to functions that each takes an int as
	an argument and return void.” The array is initialized with the names of the three functions.
	
	When the user enters a value between 0 and 2, the value is used as the subscript of the
	array of function pointers. In the function (line 24), f[choice] selects the pointer at location
	choice in the array. The pointer is dereferenced to call the function, and choice is passed as
	the argument to the function. Each function prints its argument's value and its function name to
	demonstrate that the function is called correctly.
*/
#include <stdio.h>
//function protptype
void function1 (int a);
void function2 (int b);
void function3 (int c);
int main (void)
{
	/* initialize array of 3 pointers to functions that each take an
	   int argument and return void*/
	void (*f[3])(int) = {function1, function2, function3};
	int choice; // variable to hold user's choice
	printf("Enter a number between 0 and 2, 3 to end: ");
	scanf("%d", &choice);
	//process user's choice
	while (choice >= 0 && choice < 3)
	{
		/* invoke function at location choice in array f and pass
		   choice as an argument */
		(*f[choice])(choice);
		printf("Enter a number between 0 and 2, 3 to end: ");
		scanf("%d", &choice);
	}
	printf("Program execution completed.\n");
	return 0;
}

void function1 (int a)
{
	printf("You entered %d so function1 was called\n\n", a);
}
void function2 (int b)
{
	printf("You entered %d so function2 was called\n\n", b);
}
void function3 (int c)
{
	printf("You entered %d so function3 was called\n\n", c);
}