#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: points to the head of the list
 * @n: value to add in node
 *
 * Return: returns pointer to node added
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_item;
	listint_t *current;

	current = *head;

	new_item = malloc(sizeof(listint_t));

	if (new_item == NULL)
	{
		return (NULL);
	}

	else
	{
		
		temp->n = n;

		temp->next = NULL;
	}

	return (temp);
}
