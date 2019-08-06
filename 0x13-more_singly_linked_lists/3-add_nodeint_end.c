#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a list.
 * @head: list ptr to head of list.
 * @n: data of new node.
 *
 *Return: pointer to new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	if (!new_node)
		return (NULL);

	new_node = malloc(sizeof(*new_node));

	new_node->n = n;
	temp = *head;

	if (!temp)
		*head = new_node;
	else
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}
