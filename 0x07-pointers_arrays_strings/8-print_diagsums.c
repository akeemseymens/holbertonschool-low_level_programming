#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * print_diagsums - print the diagonal sums of a square matrix
 * @a: pointer
 * @size: integer
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int *t;
	int s1 = 0;
	int s2 = 0;

	for (t = a, i = 0; i < size; ++i, t += size + 1)
		s1 += *t;

	for (t = a + size - 1, i = 0; i < size; ++i, t += size - 1)
		s2 += *t;

	printf("%d, %d\n", s1, s2);
}
