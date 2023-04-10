#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be flipped
 * @n: The number to be flipped.
 * @m: The number to flip n to.
 * Return: The number of bits to flip to convert n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0  && xor > 0)
	{
		count += (xor & 1);
		xor >>= 1;
	}

	return (count);
}
