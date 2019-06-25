#include "holberton.h"
/**
 * jack_bauer entry - Write a function that -
 * prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * @i @j @k @l:  int
 *Return: Always 0.
 */
void jack_bauer(void);
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0' ; i <= '2' ; i++)
	{
		for (j = '0' ; j <= '3' ; j++)
		{
			for (k = '0' ; k <= '5' ; k++)
			{
				for (l = '0' ; l <= '9' ; l++)
				{
					_putchar('i');
					_putchar('j');
					_putchar(':');
					_putchar('k');
					_putchar('l');
					_putchar('/n');
				}
			}
		}
	}
}
