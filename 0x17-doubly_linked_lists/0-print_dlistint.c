#include "lists.h"
/**
 * print_dlistin - Prints all the elements of the list.
 *
 *Returns the count.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
