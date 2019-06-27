#include "holberton.h"
/**
 * print_square prints a square, followed by a new line
 * @n: int range parameter.
 *
 * Return: Always 0.
 */
void print_square(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
