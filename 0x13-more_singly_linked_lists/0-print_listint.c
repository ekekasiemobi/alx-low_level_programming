#include "lists.h"

/**
 * print_listint - prints all the elements of the linked list
 * @h: a node (memeber of the linked list)
 * Return: Number of element in the linked list
 */

size_t print_listint(const listint_t *h)
{

	int i = 0;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);


}
