#include "lists.h"

/**
 * sum_listint - returns sum of datas of a linked list
 * @head: pointer to the first node
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int count = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		count += current->n;

		current = current->next;
	}

	return (count);
}
