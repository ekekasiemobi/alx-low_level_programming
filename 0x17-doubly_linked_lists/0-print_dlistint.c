#include "lists.h"
/**
 * print_dlistint - prints all the elements of a doubly linked_list
 * @h: a node
 * Return: No of nodes counted
 */
size_t print_dlistint(const dlistint_t *h)
{
	int element_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		element_count++;
	}
	return (element_count);
}
