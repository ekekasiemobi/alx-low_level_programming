#include "main.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: string of binary code
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	unsigned int output = 0;

	if (b == 0)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == '0')
		{
			output = output << 1;
		}
		else if (*b == '1')
		{
			output = (output << 1) | 1;

		}
		else
		{
			return (0);
		}
		b++;
		output++;
	}

	return (output);
}
