#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints n elements of an array of integer & new line.
 * @a: char
 * @n: int
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
