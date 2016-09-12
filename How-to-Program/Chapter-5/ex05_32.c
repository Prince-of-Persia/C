// Select an integer from 1-1K at random and have the user guess
#include <stdio.h>
#include <stdlib.h>

int main (void) {

	char loop; 
	int number, guess;

	// Seed the random number generator
	srand(time(NULL)); 

	// Initialize the while loop
	loop = 'y'; 

	// New number
	number = 1 + rand() % 1000; // Random number between 1 and 1K 

	while (loop == 'y') {	
		// Ask user for value
		printf("%s", "I have a number between 1 and 1000.\n");
		printf("%s", "Can you guess my number?\n");
		printf("%s", "Please type your first guess: ");
		scanf("%d", &guess); 
		
		    // Check if guess is the same as the number
                if (guess == number) {
                        printf("%s", "Excellent! You guessed the number!\n");
                        printf("%s", "Would you like to play again (y or n)?:");
                        scanf(" %c", &loop); 
                } // end if
		else { 
			while (guess != number) {
				if (guess < number) {
					printf("%s", "Too low! Try again: ");
				} // end if
				else if (guess > number) {
					printf("%s", "Too high! Try again: ");
				} // end else
				scanf("%d", &guess); 
			} // end while
		} // end else

		number = 1 + rand() % 1000; 

	} // end while 

} // end main
