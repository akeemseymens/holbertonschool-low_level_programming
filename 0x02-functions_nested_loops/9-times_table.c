#include "holberton.h"
/**
 * times_table - Write a function that -
 * prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * @i @j @n : int
 *Return: Always 0.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int n = i * j;

			if (n < 10)
			{
				if (j)
					_putchar(' ');
				_putchar('0' + n);
			}
			else
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
