#include "main.h"
/**
 *get_endianness - this checks for endianness
 *Return: big endian return 0 and little endian reurn 1
 */
int get_endianness(void)
{
	int i = 1;
	char *endian = (char *)&i;

	if (*endian == 1)
	{
		return (1);
	}
	return (0);
}
