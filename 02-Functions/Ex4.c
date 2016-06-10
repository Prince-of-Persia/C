/*
(Guess the Number) Develop a C program for a game namely “guess the
number”. The program randomly generates an integer between 1 to 1000
and it asks the player to guess the generated integer. The program
displays the following on the screen:
I generated a number between 1 and 1000.
Can you guess my number?
Please input your first guess.
The player then inputs a first guess. The program responds with one of the
followings:
1. Excellent! You guessed the number!
Would you like to play again (y or n)?
2. Too low. Try again.
3. Too high. Try again.
The program keeps looping until the player finally guesses the right number.
If the guess of the player is lower than the generated number, the program displays
‘Too low. Try again’.
If the guess of the player is higher than the generated number, the program displays
‘Too high. Try again’.
If the guess of the player is same as the generated number, the program displays
‘Excellent! You guessed the number!’ Then the program asks whether the player
would like to play again.
*/
//import required libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
   int userGuess, computerGuess; //variables to hold the generated numbers
   char gameStat = 'y'; //'y' to begin the game
   int counter = 0;
   while (gameStat == 'y')
   {
      srand(time(NULL));
      computerGuess = 1 + (rand() % 1000); //generate a number between 1 and 1000 
      //initializing  the game for user
      printf("I generated a number between 1 and 1000.\nCan you guess my number?\n" );
      printf("Please input your first guess:\n");
      scanf("%d", &userGuess); // reads user input/guess
      if (userGuess >= 1)// checks if the number entered is non-zero and positive
      {
         while (userGuess != computerGuess) 
         {
            if (userGuess < computerGuess)
            {
               printf("Too low! Try again: \n");
               scanf("%d", &userGuess);
               counter++; //incriment counter
            }else if (userGuess > computerGuess)
            {
               printf("Too high! Try again: \n");
               scanf("%d", &userGuess);
               counter++; //incriment counter
            }
         }
         if (userGuess == computerGuess)
         {
            printf("Excellent!\n");
            counter++; //incriment counter
         }
      }

      printf("You guessed the number after %d attempts.\n", counter);//display number of times took the user to guess the number
      printf("Would you like to play again (y or n)?\n");// asks if the user wants to play another game
      scanf(" %c", &gameStat);//reads the user input (y or n)
      if (gameStat == 'y'); //if y loop again
      else break; //otherwise exit
   }
}
