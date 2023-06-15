#include "lists.h"
/**
 *dlistint_len - prints the total number of nodes
 *@h: node
 *Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int element_count = 0;

	while (h)
	{
		h = h->next;
		element_count++;
	}
	return (element_count);
}
