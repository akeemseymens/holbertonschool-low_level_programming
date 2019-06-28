#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: int range parameter.
 *
 * Return void.
 */
void print_triangle(int size)
{
	int i;
        int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = size - 1; i >= 0; i--)
	{
		for (j = 0; j < size; j++)
		{
			if (j < i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
