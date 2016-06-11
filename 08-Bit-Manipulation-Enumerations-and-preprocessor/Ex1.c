// Exercise 10.13 Solution
#include <stdio.h>

// prototypes
void packCharacters( char a, char b);
void displayBits( unsigned int value );

int main( void )
{
	char a; // first character unpacked
	char b; // second character unpacked

	printf("\nPlease input the two characters\n");
	scanf("%c %c",&a,&b);
	packCharacters(a, b);
	return 0;
 }

 //void packCharacters( char *aPtr, char *bPtr, unsigned int pack )
 void packCharacters( char a, char b)
 {
	printf("The first character is : %c\n",a);
	displayBits(a);
	printf("The second character is : %c\n",b);
	displayBits(b);
	printf("The pack is : \n");
    displayBits((b<<8)|a);
 } 

 // display the bits of value
 void displayBits( unsigned int value )
 {
	unsigned int c; // bit counter
	unsigned int displayMask = 1 << 15; // bit mask
	//printf( "%7u = ", value );
	// loop through bits
	for ( c = 1; c <= 16; ++c )
	{
		value & displayMask ? putchar( '1' ) : putchar( '0' );
		value <<= 1; // shift value 1 bit to the left
		if ( c % 8 == 0 ) 
		{ // print a space
			putchar( ' ' );
		}
	} 
	 putchar( '\n' );
 } 