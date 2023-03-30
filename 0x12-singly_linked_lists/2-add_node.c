#include "lists.h"
#include <string.h>
/**
 * _strlen - returns length of a string
 * @s: pointer to string s
 *
 * Return: i
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (s[i])
			i++;
		else
			break;
	}
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first item in list
 * @str: string to add to node
 *
 * Return: list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
