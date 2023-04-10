#include "main.h"

/**
 * set_bit - gets the bit of the index
 * @n:  this is the bit to be set to 1
 * @index: this is where the bit is taken
 * Return: return -1 when it fails, return 1 when its successful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	else
	{
		(*n |= 1 << index);

		return (1);
	}
}
