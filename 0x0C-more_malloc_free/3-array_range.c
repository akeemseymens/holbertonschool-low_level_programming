#include "holberton.h"
/**
 * array_range - function that creates an array of integers.
 * @min: integers.
 * @max: integers.
 * Return: Always Array.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, x, sum;

	if (min > max)
		return (NULL);

	sum = max - min;

	ptr = malloc(sizeof(int) * (sum + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0, x = min; x <= max; x++, i++)
		ptr[i] = x;

	return (ptr);
}
