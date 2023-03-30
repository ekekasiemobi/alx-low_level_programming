#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 *
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t node_num = 0;

	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str != NULL ?
				current->str : "(nil)");
		current = current->next;
		node_num++;
	}
	return (node_num);
}
