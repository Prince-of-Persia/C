
#include <stdio.h>

// prototypes
void displayBits( unsigned int value );
unsigned int power_neg2( unsigned int n, unsigned int p );

int main(void)
{
	unsigned int number;
	unsigned int pow;
	unsigned int result;

	printf("Please input number:\n");
	scanf("%u",&number);

	printf("Please input pow:\n");
	scanf("%u",&pow);
	result=power_neg2(number,pow);
	displayBits(result);

	printf("The result is %u.\n",result);
	return 0;
}

unsigned int power_neg2( unsigned int n, unsigned int p )
{
	return (n<<p);
	//return (n>>p);
}


void displayBits( unsigned int value )
{
	unsigned int c;
	unsigned int displayMask = 1 << 15; // bit mask
	//char_bit *sizeof( unsigned int ) - 1
	//unsigned int displayMask=1<<sizeof( unsigned int );
	for (c=0;c<16;c++)
	{
		putchar(value&displayMask ? '1':'0');
		value<<=1;
		if (c%8==0) 
		{
			putchar(' ');
		}
	}
	printf("\n");
}

