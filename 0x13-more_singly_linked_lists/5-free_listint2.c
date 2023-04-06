#include "lists.h"
/**
 * free_listint2 - frees a listint_t linked list
 * @head: pointer to the head of the linked list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}

	if (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
