// Select an integer from 1-1K at random and have the user guess
// Count the number of guesses
#include <stdio.h>
#include <stdlib.h>
// function prototypes
void trycount(int guessCount); 

int main (void) {

	char loop; 
	int number, guess;
	unsigned int guessCount; 

	// Seed the random number generator
	srand(time(NULL)); 

	// Initialize the while loop
	loop = 'y'; 

	// New number
	number = 1 + rand() % 1000; // Random number between 1 and 1K 
	guessCount = 1; 

	while (loop == 'y') {	 
//		printf("%d\n", number); CHEATING MODE 
		// Ask user for value
		printf("%s", "I have a number between 1 and 1000.\n");
		printf("%s", "Can you guess my number?\n");
		printf("%s", "Please type your first guess: ");
		scanf("%d", &guess); 
		
		    // Check if guess is the same as the number
                if (guess == number) {
			// Determine the number of guesses
			++guessCount;  

                        printf("%s", "Excellent! You guessed the number!\n");
                        printf("%s", "Would you like to play again (y or n)?:"); 
                        scanf(" %c", &loop); 
                } // end if
		else { 
			while (guess != number) {
				if (guess < number) {
					printf("%s", "Too low! Try again: ");
					++guessCount;
				} // end if
				else if (guess > number) {
					printf("%s", "Too high! Try again: ");
					++guessCount; 
				} // end else
				scanf("%d", &guess); 
			} // end while
		} // end else

		trycount(guessCount); 
		// Reset game stats
		number = 1 + rand() % 1000;
		guessCount = 1; 
	} // end while 

} // end main

void trycount(int guessCount) {

	if (guessCount == 10) {
		puts("GG EZ");
	} // end if
	else if (guessCount < 10) {
		puts("IM DA BES");
	} // end else if 
	else {
		puts("Git gud"); 
	} // end else

} // end guessCount 
