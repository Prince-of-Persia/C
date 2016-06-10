/*
Write a program that encodes English-language phrases into Pig Latin. Pig Latin
is a form of coded language often used for amusement. Many variations exist in the methods
used to form Pig-Latin phrases.

To form a pig-Latin phrase from an English-language phrase, tokenize the phrase into
words with function strtok. To translate each English word into a pig-Latin word, place the
first letter of the English word at the end of the English word and add the letters ay. There are
a few examples for the pig-Latin phrases:
1. The word jump becomes umpjay
2. The word the becomes hetay
3. The word computer becomes omputercay
The program inputs a series of English-language phrases and outputs a series of pig-Latin
phrases, where the English phrase consists of words separated by blanks, there are no
punctuation marks, and all words have two or more letters.
*/
#include <stdio.h>
#include <string.h>

void printLatinWord(char *);

int main(void){

	char str[100];
	char *ptr;
	char *pigPtr;

	puts("Please input the English-language phrases: ");// ask user for input
	gets(str); // read user input

	ptr=strtok(str," ");

	while (ptr!=NULL)
	{
		//str is now: 
		//printf("\n%s", str);
		printLatinWord(ptr);
		ptr=strtok(NULL, " ");

		if (ptr!=NULL)
		{
			printf(" ");
		}
		
	}
	return 0;
}
//Printing function
void printLatinWord(char *dummy){

	int i;
	for (i = 1; i < strlen(dummy); i++)
	{
		printf("%c", dummy[i]);
	}
	printf("%c%s", dummy[0],"ay");

}
