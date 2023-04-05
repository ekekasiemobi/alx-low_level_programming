#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_item;

	new_item = malloc ( sizeof(listint_t));

	if ( new_item == NULL)
	{
		return (NULL);
	}

	else

	{
		new_item->n = n;
		new_item->next = *head;
		*head = new_item;
	}

	return (new_item);
}
