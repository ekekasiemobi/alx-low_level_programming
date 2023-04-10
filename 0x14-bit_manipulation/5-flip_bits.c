#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count, i = 0;
	
	for (i = 0; i < sizeof(n) * 8; i++)
	
	{
        	if ((xor >> i) & 1)
		{
			count++;
		}
	}

	return (count);
}
