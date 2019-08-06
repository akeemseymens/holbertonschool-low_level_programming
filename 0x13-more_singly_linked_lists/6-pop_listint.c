#include "lists.h"

/**
 * pop_listint - pop the first element of a linked list
 * @head: pointer to pointer to first element of linked list
 *
 * Return: data in popped node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current

	if (!head && !*head)
		return (0);

	data = (*head)->n;
	current = *head;
	*head = current->next;
	free(current);

	return (data);
}
