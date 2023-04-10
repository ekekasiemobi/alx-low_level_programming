#include "main.h"
/**
 *get_endianness - this function checks foe endianness
 *Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *endian = (char *)&i;

	if (*endian == 1)
	{
		return (1);
	}
	if (*endian == 0)
	{
		return (0);
	}
}
