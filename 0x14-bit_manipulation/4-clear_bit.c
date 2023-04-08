#include "main.h"

/**
 * clear_bit - gets the bit of the the index
 * @n:  this is the bit
 * @index: where the bit is taken
 * Return: return -1 unsuccesful, successful return 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	else
	{
		*n &= ~( 1 << index);

		return (1);
	}
}
