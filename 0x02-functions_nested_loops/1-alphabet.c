#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercases
 * prints a new line
 * Return: always return 0
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');

}
