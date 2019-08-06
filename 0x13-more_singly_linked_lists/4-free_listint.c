#include "lists.h"

/**
 *free_listint - Function that frees a list
 *@head: Pointer
 *Return: size_t counter value
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp  = head->next;
		free(head);
		head = temp;
	}
}
