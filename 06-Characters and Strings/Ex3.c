/*
Develop a program that uses random number generator to create sentences. In
the program, there are four char arrays of pointers namely article, noun, verb and
preposition.
The program can be used to generate a sentence by selecting a word randomly from
each array in the following order:
article, noun, verb, preposition, article and noun.
where articles consists of the words “the”, “a”, “one”, “some” and “any”;
nouns consists of the words “boy”, “girl”, “dog”, “town” and “car”;
verbs consists of the words “drove”, “jumped”, “ran”, “walked” and “skipped”;
prepositions consists of the words “to”, “from”, “over”, “under” and “on”
Each word is concatenated to the previous words to hold the entire sentence. The first
character of the sentence must be capital.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

#define MAXN 5
#define MAXC 10
int main(int argc, char const *argv[])
{
	char article[MAXN][MAXC] = {"the", "a", "one", "some", "any"};
	char nouns [MAXN][MAXC] = {"boy", "girl", "dog", "town", "car"};
	char verbs [MAXN][MAXC] = {"drove", "jumped", "ran", "walked", "skipped"};
	char prepositions [MAXN][MAXC] = {"to", "from", "over", "under", "on"};
	char buf[256];
	int a1Num, a2Num, n1Num, n2Num, vNum, pNum;
	srand(time(NULL)); // seed the rand() from time
	
	for (int i = 0; i < MAXN; ++i)
	{
		a1Num	= rand() % MAXN; //generate a number between 0 and MAXN
		a2Num	= rand() % MAXN;
		n1Num	= rand() % MAXN;
		n2Num	= rand() % MAXN;
		vNum	= rand() % MAXN;
		pNum	= rand() % MAXN;

		
		snprintf(buf, sizeof(buf), "%s %s %s %s %s %s.", 
			article[a1Num],
			nouns[n1Num],
			verbs[vNum],
			prepositions[pNum],
			article[a2Num],
			nouns[n2Num]);
		printf("%c", toupper(buf[0]));
		for (int i = 1; i < strlen(buf); ++i)
		{
			printf("%c", buf[i]);
		}
		printf("\n");
	}
	return 0;
}