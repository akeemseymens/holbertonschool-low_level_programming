#include "holberton.h"

/**
 * array_range - function that creates an array of integers..
 * @min: unsigned int
 * @max: unsigned int.
 * Return: Always Array.
 */

int *array_range(int min, int max)
{
	int *ptr;
	unsigned int i;

	if (min > max)
		return (NULL);

	sum = max + min;

	ptr = malloc((sum + 1) sizeof(int)0);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < max; i++)
		ptr[i] = i;

	return (ptr);
}
