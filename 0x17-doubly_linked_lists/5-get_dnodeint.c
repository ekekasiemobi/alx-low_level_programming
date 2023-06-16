#include "lists.h"
/**
 * get_dnodeint_at_index - get a node at a specific index
 * @head: a node of a list
 * @index: position of a node
 * Return: a list of node found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	i = 0;

	temp = head;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return (NULL);
	}

	return (temp);
}
