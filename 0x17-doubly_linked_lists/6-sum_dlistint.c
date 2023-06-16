#include "lists.h"
/**
 * sum_dlistint - sum of all the dat in a doubly linked lista
 * @head: a node of doubly linked list
 * Return: total of the element in node of the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int total = 0;

	temp = head;

	if (head == NULL)
	{
		return (0);
	}
	while (temp)
	{
		total = total + temp->n;
		temp = temp->next;
	}
	return (total);
}
