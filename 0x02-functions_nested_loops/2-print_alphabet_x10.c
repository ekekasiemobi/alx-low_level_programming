#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 5 times
 */

void print_alphabet_x10(void)
{
	char alpha;


	for (alpha = 'a'; alpha < 'z'; alpha++)
	{
		_putchar(alpha * 5);
	}
	_putchar('\n');
}
