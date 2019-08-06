#include "lists.h"
/**
 *print_list - prints a list of numbers.
 *@h: linked pointer list of number.
 *Return: Count of print array.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		printf("[%d]\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
