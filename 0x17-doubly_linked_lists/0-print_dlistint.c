#include "lists.h"
/**
 * print_listint - prints all the elements of a doubly linked_list
 * @h: a node
 * Return: No of nodes counted
 */
size_t print_listint(const listint_t *h)
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
