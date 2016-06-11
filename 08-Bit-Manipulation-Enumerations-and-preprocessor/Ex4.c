 
// Exercise 10.14 Solution
#include <stdio.h>

// prototypes
unsigned int reverseBits( unsigned int value );
void displayBits( unsigned int value );

int main( void )
{
	unsigned int a; // unsigned int from user

	// prompt user and read value
	printf( "%s", "Enter an unsigned int: " );
	scanf( "%u", &a );
	// display bits of a before reversed
	puts( "\nBefore bits are reversed:" );
	displayBits( a );

	// reverse bits and display results
	a = reverseBits( a );
	puts( "\nAfter bits are reversed:" );
	displayBits( a );
	return 0;
} 

// reverseBits reverses the bits of value
unsigned int reverseBits( unsigned int value )
	{
	unsigned int mask = 1; // bit mask
	unsigned int temp = 0; // reversed bits
	unsigned int i; // loop counter
	// loop through bits of value
	for ( i = 0; i <= 15; ++i ) 
	{
		temp <<= 1; // left shift 1 bit
		temp |= ( value & mask ); // separate bit and place in temp
		value >>= 1; // right shift 1 bit
	} 
	return temp;
} 

// display the bits of value
void displayBits( unsigned int value )
{
	unsigned int c; // bit counter
	unsigned int displayMask = 1 << 15; // bit mask

	printf( "%7u = ", value );
	// loop through bits
	for ( c = 1; c <= 16; ++c ) 
	{
		value & displayMask ? putchar( '1' ) : putchar( '0' );
		value <<= 1; // shift value 1 bit to the left

		if ( c % 8 == 0 )
		{ 	// print a space
			putchar( ' ' );
		} 
	} 
	putchar( '\n' );
} 
