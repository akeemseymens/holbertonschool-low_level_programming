#include "lists.h"

/**
 *add_nodeint - returns the number of elements linked list_t list.
 *@head: list ptr list
 *@n: content in the list.
 *Return: structure type
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(*new_node));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
