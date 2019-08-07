#include "lists.h"

/**
 * reverse_listint - print a string before main
 * @head: pointers to a pointer list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *previous;

	current = *head;
	previous = NULL;
	while (*head != NULL)
	{
		*head = (*head)->next;
		current->next = previous;
		previous = current;
		current = *head;
	}

	*head = previous;
	return (*head);

}
