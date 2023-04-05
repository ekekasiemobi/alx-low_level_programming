#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the first node
 * Return: number of items in the list
 */

size_t listint_len(const listint_t *h)
{
	int j = 0;

	for (j = 0; h != NULL; j++)
	{
		h = h->next;
	}

	return (j);
}
