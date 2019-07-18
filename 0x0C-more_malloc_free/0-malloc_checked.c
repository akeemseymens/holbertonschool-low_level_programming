#include "holberton.h"

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: unsigned integer.
 * Return: Always Array.
 */

void *malloc_checked(unsigned int b);
{
	void *ptr;

	array = malloc(b);

	if (array == NULL)
	{
		free(array);
		exit (98);
	}
	return (ptr);

}
