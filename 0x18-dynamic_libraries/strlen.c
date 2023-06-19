#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: character
 *
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
