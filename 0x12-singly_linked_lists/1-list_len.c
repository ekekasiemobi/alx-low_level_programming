#include "lists.h"
/**
* list_len - returns the number of elements in a linked list_t list
* @h: list pointer
*
* Return: length of list
*/

size_t list_len(const list_t *h)
{
	size_t node_num = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		node_num++;
	}
	return (node_num);
}
