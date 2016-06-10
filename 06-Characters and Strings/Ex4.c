/*
	Design and implement a program to perform editing operations on a line of text.
The editor can be used to locate a specified target substring, delete a substring, and insert a
substring at a specified location. The editor can be used to handle source strings of less than
100 characters.

	In the editor, the source line is first entered to be edited. It then repeatedly scan and
process the editor commands until it receives the Q (Quit) command. The following is an
example of the editor:

Enter the source string:
> We are living in Perth.

Enter D(Delete), I(insert), F(Find), or Q(Quit) > D
String to delete> living
New source: We are in Perth.

Enter D(Delete), I(insert), F(Find), or Q(Quit) > F
String to find> in
‘in’ found at position 8
New source: We are in Perth.

Enter D(Delete), I(insert), F(Find), or Q(Quit) > I
String to insert> studying
Position of insertion> 8
New source: We are studying in Perth.

Enter D(Delete), I(insert), F(Find), or Q(Quit) > q
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXC 100
#define MAX 50
#define CHAR 1



char delete (char *s, const char *toremove);
void insert ();
int find    (char *s, const char *tofind);

int main(int argc, char const *argv[])
{
	char source[MAXC];
	char input[MAX];
	char stat = 'Y';
	int substring_pos;

	printf("%s\n", "Enter the source string:");
	fgets(source, MAXC, stdin);
	while (stat != 'Q')
	{

		printf("%s\n", "Enter D(Delete), I(Insert), F(Find), or Q(Quit)");
		//fgets(stat, CHAR, stdin);
		scanf(" %c", &stat);
		while (getchar() != '\n');
		if (stat == 'D')
		{
			printf("%s\n", "String to delete:");
			fgets(input, MAX, stdin);
			delete(source, input);
			printf("%s\n", source);
		}
		else if(stat == 'F')
		{
			printf("%s\n","string to find:");
			fgets(input, MAX, stdin);
			substring_pos = find(source, input);
			printf("%s found in possition %d\n", input - '\n', substring_pos);
		}
	}



	//printf("%s\n", string);
	return 0;
}

char delete (char *s, const char *toremove)
{
	/*
	int slen = strlen(s);
	int toremovelen = strlen(toremove) - '\0';
	int possition = find(s, toremove);
	char string1[slen - toremovelen];
	char string2[slen - toremovelen];
	memmove (string1, s, possition);
	
	//memmove (string2, s, slen - possition );
	strcat (string1, string2);
	strcpy (s, string1);

	printf("string length = %d\n To remove length = %d\n possition = %d\n",
	slen, toremovelen, possition );
	*/
	char *strLocation;
	char strAfter[100];
	strcpy(strAfter, s);
	strLocation = strstr(strAfter, toremove);
	if (strLocation != NULL)
	{
		strcpy(strLocation, strLocation + strlen(toremove));
	}
	strcpy(s, strLocation);
}

void insert ()
{

}

int find (char *s, const char *tofind)
{
	/*
	char *result = strstr(s, tofind);
	int possition = result - s;
	int substringLength = (strlen(s) ) - possition;
	*/
	int substringLength = strcspn (s, tofind);
	//printf("length of string s is %d.\nPossition is %d \n", strlen(s), substringLength);
	return substringLength;
}


/*
void insertWord(char *word)
{
	int i,pos;
	char find[20],sem1[100],sem2[100];
	int dposfound,newlen_word;
	char *pfound;
	
	printf("String to insert >");
	gets(find);
	printf("Position of insertion>");
	scanf("%d",&pos);
	memset(sem1, '\0', sizeof(sem1));memset(sem2, '\0', sizeof(sem2));
	strncpy(sem1, word, pos);
	strcpy(sem2, word+pos-1);
	strcat(sem1,find);
	strcat(sem1,sem2);
	puts(sem1);
}

void deleteWord(char *word)
{
	int i;
	char find[20],sem1[100],sem2[100];
	int dposfound,newlen_word;
	char *pfound;
	
	printf("String to find >");
	gets(find);

   pfound = strstr(word, find); 

   if (pfound != 0)
    {
        dposfound = (int) (pfound - word)+1; 
    }

	newlen_word=strlen(word)-strlen(find);
   char deletedword[newlen_word];
   deletedword[newlen_word]='\0';
   memset(sem1, '\0', sizeof(sem1));memset(sem2, '\0', sizeof(sem2));

   printf("dposfound %d strlen(word) %d strlen(find) %d\n",dposfound,strlen(word),strlen(find));

   if (((dposfound-2)>0)&& !( strlen(word)<(strlen(find)+dposfound)) ) // in between
   {
   strncpy(sem1, word, dposfound-2);
   strcpy(sem2, word+dposfound+strlen(find));
   
   printf("%s%c%s",sem1,' ',sem2);
   }
   else if ((dposfound-2)<=0) // first word
   {
	
   strncpy(sem1, word, dposfound);
   strcpy(sem2, word+dposfound+strlen(find));
   
   printf("%s",sem2);
   
   }
   else // last word
   {
	strncpy(sem1, word, dposfound-1);
    printf("%s",sem1);
   }
}

void searchWord(char *word)
{
	int i;
	char find[20];
	int dposfound;
	char *pfound;
	
	printf("String to find >");
	gets(find);

   pfound = strstr(word, find); 

   if (pfound != 0)
    {
        dposfound = (int) (pfound - word)+1; 
		printf("'%s' found at position %d.",find,dposfound);
    }

}
*/