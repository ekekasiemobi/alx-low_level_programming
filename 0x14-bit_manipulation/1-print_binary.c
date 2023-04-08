#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary form
 */


void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/*equivalent to dividing n by 2*/
		print_binary(n >> 1);
	}

	putchar('0' + (n & 1));

}
