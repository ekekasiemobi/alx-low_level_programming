#include "lists.h"

/**
 * pop_listint - deletes the head node of the linked list
 * @head: head of linked list
 * Return: return always 0
 */

int pop_listint(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return (0);

	current = *head;
	if (current == NULL)
		return (0);
