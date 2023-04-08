#include "main.h"

/**
 * get_bit - gets the bit of the the index
 * @n:  this is the bit
 * @index: where the bit is taken
 * Return: return -1 unsuccesful
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	else
	{
		return ((n >> index) & 1);
	}
}
