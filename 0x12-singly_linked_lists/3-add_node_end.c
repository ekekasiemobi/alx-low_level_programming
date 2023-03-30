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
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first node in the list
 * @str: string for a node
 *
 * Return: updated list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *current;

	current = *head;

	while (current && current->next != NULL)
		current = current->next;

	temp = malloc(sizeof(list_t));

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
	temp->next = NULL;

	if (current)
		current->next = temp;
	else
		*head = temp;

	return (temp);
}
