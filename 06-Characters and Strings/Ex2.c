/*
Develop a program that inputs phone number in a string s, where s is in the form
(111) 111-1111.
We can use the function strtok to extract the area code (the first three digits) as a token.
After the area code, the next seven digits of the phone number can be concatenated into a
string. The program should convert the area-code string to int area_code and convert the
phone number string to long int real_phone_num. The print displays both the area code and
the phone number onto the screen using the following commands:
printf("The area code is: %d\n\n",area_code);
printf("The phone number is: %ld\n\n",real_phone_num);

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	char input_string [12];
	//const char s[4] = "+()-";
	char *tokenptr, *stringptr;
	int area_code;
	long int real_phone_num;	

	printf("Please enter a phone number\n");
	scanf("%s", &input_string);
	tokenptr = strtok (input_string, "+()-");
	stringptr = input_string;
	while (tokenptr != NULL)
	{
		char *end;
		while (1)
		{
			area_code = atoi(tokenptr); // converts string to int
			if (end == stringptr)
			{
				break;
			}
			real_phone_num = strtol (tokenptr, &end, 10);
			stringptr = end;
		}
		tokenptr = strtok (NULL, " ");
	}

	printf("%s %d\n","The are code is:", area_code);
	//real_phone_num = strtol(input_string, &token, 10);
	printf("%s %ld\n","The phone number is:", real_phone_num);
	return 0;
}

/*
int main(void)
{
	char phone_num[100];
	char *phone_numpt;
	int i;
	int area_code;
	long int real_phone_num;

	printf("Please input the number in the form (xxx) xxx-xxxx\n\n");
	gets(phone_num);

	phone_numpt = strtok(phone_num," +()-");
	

	area_code= atoi(phone_numpt);
	printf("The area code is: %d\n\n",area_code);
	
	
	phone_numpt = strtok (NULL, " +()-");
	real_phone_num= atol(phone_numpt)*10000;
	
	phone_numpt = strtok (NULL, " +()-");

	real_phone_num= atol(phone_numpt)+real_phone_num;
	printf("The phone number is: %ld\n\n",real_phone_num);
		
}
*/