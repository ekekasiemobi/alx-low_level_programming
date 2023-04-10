#include "main.h"

/**
 * clear_bit - gets the bit of the index to be set to zero
 * @n:  this is the bit to be set to zero
 * @index: where the bit is taken and set to zero
 * Return: return -1 when it fails, return 1 when its successful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	else
	{
		*n &= ~(1 << index);

		return (1);
	}
}
