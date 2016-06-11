# C
C Learning

<h1>1 Over view</h1>
<h2>Exercise 1</h2>
	How can you determine how fast your own computer really operates? Write
	a program with a while loop that counts from 1 to 1,000,000,000 by 1. Every time
	the count reaches a multiple of 200,000,000, print that number on the screen. Use
	the function clock() to time how long 1 billion repetitions of the loop take.
<h2>Exercise 2</h2>	
	Write a program that reads three nonzero real numbers and determines and if
	they can be used to as the dimensions of a right-angled triangle. The
	program could interact as follows:
	Enter three integers: 3 4 5
	The three integers are the sides of a right triangle
	Enter three integers: 9 4 1
	The three integers are not the sides of a right triangle
<h2>Exercise 3</h2>	
	The factorial of a nonnegative integer n is written as n!
	n! can be defined as follows:
	n! = n(n − 1)(n − 2) · · · 1
	for values of n greater than or equal to 1 and
	n! = 1
	for n = 0.
	a) Write a program that reads a nonnegative integer, and computes and prints
	the factorial of the nonnegative integer.
<h2>Exercise 3b</h2>
	b) Write a program that estimates the value of the mathematical constant e by
	using the formula:
	e = 1 + (1/1!) + (1/2!) + (1/3!) + ...
	The program should display a result for the user.
	[Hints: If e represents a variable of data type double, printf(“%f ”, e) can be
	used to print the value of e.
<h2>Exercise 4b</h2>
	What does the following programming segment do? Redevelop the following
	using the ‘while’ – loop.
	
	void main()
	{
		for (int i = 1; i <= 5; ++i)
		{
			for (int j = 1; j <= 3; ++j)
			{
				for (int k = 1; k <= 4; ++k)
				{
					printf("*");
				}
				printf("\n");
			}
			printf("\n");
		}
	}
<h2>Exercise 5</h2>
	Write a program that takes the x-y coordinates of a point in the Cartesian
	plane and displays a message telling either an axis on which the point lies or the
	quadrant in which it is found. Sample lines of output are
<h2>Exercise 6</h2>
	Develop a program that determines the largest of several positive integers.
	Assume that the first positive integer specifies the number of positive integers to be
	inputted to the program.
<h2>Exercise 7</h2>
	Develop a program based on the for-loops to print the following patterns. All
	asterisks (*) are printed by a single printf statement of the form printf(“*”).
	
	(refer to lab script for the pattern)


<h1>2 Functions</h1>
<h2>Exercise 1</h2>
	How can you determine how fast your own computer really operates? Write
	a program with a while loop that counts from 1 to 1,000,000,000 by 1. Every time
	the count reaches a multiple of 200,000,000, print that number on the screen. Use
	the function clock() to time how long 1 billion repetitions of the loop take.
<h2>Exercise 2</h2>	
	Write a program that reads three nonzero real numbers and determines and if
	they can be used to as the dimensions of a right-angled triangle. The
	program could interact as follows:
	Enter three integers: 3 4 5
	The three integers are the sides of a right triangle
	Enter three integers: 9 4 1
	The three integers are not the sides of a right triangle
<h2>Exercise 3</h2>	
	The factorial of a nonnegative integer n is written as n!
	n! can be defined as follows:
	n! = n(n − 1)(n − 2) · · · 1
	for values of n greater than or equal to 1 and
	n! = 1
	for n = 0.
	a) Write a program that reads a nonnegative integer, and computes and prints
	the factorial of the nonnegative integer.
<h2>Exercise 3b</h2>
	b) Write a program that estimates the value of the mathematical constant e by
	using the formula:
	e = 1 + (1/1!) + (1/2!) + (1/3!) + ...
	The program should display a result for the user.
	[Hints: If e represents a variable of data type double, printf(“%f ”, e) can be
	used to print the value of e.
<h2>Exercise 4b</h2>
	What does the following programming segment do? Redevelop the following
	using the ‘while’ – loop.
	
	void main()
	{
		for (int i = 1; i <= 5; ++i)
		{
			for (int j = 1; j <= 3; ++j)
			{
				for (int k = 1; k <= 4; ++k)
				{
					printf("*");
				}
				printf("\n");
			}
			printf("\n");
		}
	}
<h2>Exercise 5</h2>
	Write a program that takes the x-y coordinates of a point in the Cartesian
	plane and displays a message telling either an axis on which the point lies or the
	quadrant in which it is found. Sample lines of output are
<h2>Exercise 6</h2>
	Develop a program that determines the largest of several positive integers.
	Assume that the first positive integer specifies the number of positive integers to be
	inputted to the program.
<h2>Exercise 7</h2>
	Develop a program based on the for-loops to print the following patterns. All
	asterisks (*) are printed by a single printf statement of the form printf(“*”).
	
	(refer to lab script for the pattern)


<h1>03-Formatted input and output</h1>
<h2>Exercise 1</h2>
	(Differences between %d and %i) Develop a program to illustrate the
	difference between the conversion specifiers %d and %i using in the scanf
	statements. The following codes are used to input and display the values.
	scanf( "%i%d", &x, &y );
	printf( "%d %d\n", x, y );
	Try the following sets as input data:
	10 10
	‐10 ‐10
	010 010
	0x10 0x10
<h2>Exercise 2</h2>
	Use printf and %f to display the value, 100.453627, to the nearest digit (i.e.
	100), the tenth digit (i.e. 100.5), the hundredth digit (i.e. 100.45), the thousandth digit
	(i.e. 100.453) and the ten-thousandth digit (i.e. 100.4536).
	nearest digit 			100
	tenth digit 			100.5
	hundredth digit 		100.45
	thousandth digit 		100.453
	ten‐thousandth digit 	100.4536
<h2>Exercise 3</h2>
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
<h2>Exercise 4</h2>
	The use of computers in education can be referred as Computer-Assisted
	Instruction (CAI). Develop a program that helps elementary school students learning
	multiplication. Use the ‘ rand()’ function to generate two positive one-digit integers.
	The program gives the students with a question, such as
					What is the value of 6 times 7?
	The student then inputs the answer. Next, the program checks the student answer.
	If the answer is correct, the program displays the message “Correct” and asks
	another multiplication question. If the answer is wrong, the program displays the
	message “Incorrect. Please try again.” and let the student try the same
	question repeatedly until the student finally answers correctly.
<h2>Exercise 5</h2>
	Develop a program that converts integer Fahrenheit temperatures from 0 to 212
	degrees to floating point Celsius temperatures with 3 digits of precision. Use the formula
					Celsius = 5.0/9.0 * (fehrenheit - 32);
	to perform the calculation. The program output is displayed in the following format, where the
	value of Celsius consists of 6 digits including the sign and the decimal point.
	Fehrenheit 		Celsius
	35 			+1.667
	Fehreheit 		Celsius
	10 			‐12.22
<h2>Exercise 6</h2>
	Develop a program that generate 5 integers randomly from 1 to 1000. 
	For each integer, the program displays the integer value and the number of digits generated so far. 
	The program output is represented in the following format, where there are 5 empty spaces between ‘Value’ and ‘Total characters’:  
	Value   
	 Total Characters 
	  342    3 
	  1000   7  
	  8  	 8  
	  90   	 10  
	  100    13
<h2>Exercise 7</h2>
	As communications channels are mostly noisy, the approach of checksum can be
	used to check the data correctness. The checksum for a piece of data can be computed by
	summing the integer codes of the data and computing the remainder of this sum by dividing
	with 16. If the remainder is same as the last integer, the data is correct. Write a program that
	inputs the data with 7 integers and displays the checksum for the data. The program continues
	displaying checksums until the user enters all the 7 integers as zero.
	
	This is an example of the checksum:
	Data : 25 11 12 7 13 4 8, where the last integer, 8, performs the checksum.
	Sum of the data: 72 = (25+11+12+7+13+4)
	The remainder when dividing the sum by 16 is 8 which is equal to the checksum. Hence this
	data is correct.
	
	This is another example of the checksum:
	Data : 24 11 12 7 13 4 8, where the last integer, 8, performs the checksum.
	Sum of the data: 71 = (24+11+12+7+13+4)
	The remainder when dividing the sum by 16 is 7 which is not equal to the checksum. Hence
	this data is not correct.


<h1>04-Arrays</h1>

<h1>05-Pointers</h1>
<h2>Exercise 1</h2>
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
	
<h3>a)</h3>
		Create a text-based, menu-driven program that allows the user to choose whether to
	calculate the circumference of a circle, the area of a circle or the volume of a sphere. The
	program should then input a radius from the user, perform the appropriate calculation and
	display the result. Use an array of function pointers in which each pointer represents a
	function that returns void and receives a double parameter. The corresponding functions
	should each display messages indicating which calculation was performed, the value of the
	radius and the result of the calculation.
	
<h3>b)</h3>
		Create a text-based, menu-driven program that allows the user to choose whether to add,
	subtract, multiply or divide two numbers. The program should then input two double values
	from the user, perform the appropriate calculation and display the result. Use an array of
	function pointers in which each pointer represents a function that returns void and receives
	two double parameters. The corresponding functions display messages indicating which
	calculation was performed, the values of the parameters and the result of the calculation.
  	
<h2>Exercise 2</h2>
	The Open School admits children to its kindergarten in the order in which they apply.
	However, the list of applicants is easier to be handled if it is in alphabetical order. Develop a
	program which uses an input list of names reflecting the order in which applications were
	received. The program creates a set of pointers for the name list and sorts the list in
	alphabetical order. The screen shall create the following:

	Enter number of applicants (0 . . 50)
	> 5
	Enter names of applicants on separate lines:
	In the order in which they applied
	SADDLER, MARGARET
	INGRAM, RICHARD,
	FAATZ, SUSAN
	GONZALES, LORI
	KEITH, CHARLES
	
	Alphabetical Order:
	FAATZ, SUSAN
	GONZALES, LORI
	INGRAM, RICHARD
	KEITH, CHARLES
	SADDLER, MARGARET



<h1>06-Characters and Strings</h1>





<h1>07-Structure and Union Types</h1>
<h2>Exercise 1.</h2>
  Develop a program in order to determine how long a battery can be operated on an electrical device, where the battery needs to supply an electrical device with a particular amount of current (amps).
  
  In the program, we need to create a structure type namely battery_t, to represent the battery variables
  - Battery voltage 
  - Amount of energy that the battery is capable of storing 
  - Amount of energy currently storing (in joules) in the battery.
  In the program, we need to define three functions namely power_device, max_time, and recharge.
  
  power_device attempts to determine the following:
  - power_device determines whether the battery’s energy reserve is adequate to power the device for the prescribed time.
  - If the energy reserve is adequate, power_device updates the battery’s energy reserve by subtracting the energy consumed and informs the users by returning a true message.
  - If the energy reserve is adequate, power_device leaves the energy reserve unchanged and informs the users by returning a false message.
  
  max_time uses the battery variables represented by battery_t and the current of an electrical device as the function input. It computes the number of seconds that the battery can operate the device before it is fully discharged. max_time does not attempt to change any battery variables.
  
  recharge attempts to reset the amount of energy currently stored in the battery to be the amount of energy that the battery is capable of storing.
  
  To develop this program, we may use the following equations:
  
  p = v * i
  w = p * t
  p = power (W)
  v = voltage (V)
  i = current in amps (A)
  w = energy (J)
  t = time (s)
  
  After developed the program, we can perform the simulation. We neglect any loss of energy in the transfer from battery to device. We consider the following parameters in the battery and the electrical device.
  
  For the battery, we use:
  - a 12-V automobile battery
  - the maximum energy storage of 5106 J in the battery
  - Amount of energy currently storing in the battery is 4106 J
  
  The electrical device is a lighting system which needs to be operated with the following requirements:
  - operation current is 4 A
  - operation time is 15 minutes
  
  After connected with this light system for 15 minutes, we connect the battery to an 8-A device. Compute how long the battery can power this 8-A device. After recharging the battery, recalculate how long it can operate on this 8-A device.



<h1>08-Bit-Manipulation-Enumerations-and-preprocessor</h1>	