#include "lists.h"
/**
 *list_len - a function that returns the number of elements linked list_t list.
 *@h: list ptr list
 *Return: Count of print array.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
