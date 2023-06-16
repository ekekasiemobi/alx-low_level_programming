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

	while (temp && temp->next)
	{
		i++;
		temp = temp->next;
	}
	if (index >i)
	{
		return (NULL);
	}
	while (i != index)
	{
		i++;
		head = head->next;
	}
	return (head);
}
