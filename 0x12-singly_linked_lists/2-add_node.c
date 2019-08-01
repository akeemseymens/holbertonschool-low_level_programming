#include "lists.h"
/**
 *add_node - a function that returns the number of elements linked list_t list.
 *@head: list ptr list
 *@str: content in the list.
 *Return: Count of pointer.
 */

list_t *add_node(list_t **head, const char *str);
{
	list_t *new_node;
	unsigned int len  = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(size_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;

	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
