#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t linked list
 * @head: pointer to the head of the linked list
 *
 * Return: always return 0
 */
void free_listint(listint_t *head)
{
    listint_t *current;
    
    current = head;

    while (head != NULL)
    
	    head = head->next;
	    
	    if (current != NULL)
	    {
		    free(current);
	    }
    }
}

