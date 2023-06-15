#include "lists.h"
/**
 *listint_len - prints the total number of nodes
 *@h: node
 *Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	int element_count = 0;

	while (h)
	{
		h = h->next;
		element_count++;
	}
	return (element_count);
}
