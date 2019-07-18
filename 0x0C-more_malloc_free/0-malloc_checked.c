#include "holberton.h"

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: unsigned integer.
 * Return: Always Array.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
