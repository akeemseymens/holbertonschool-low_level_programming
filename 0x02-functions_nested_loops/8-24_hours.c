#include "holberton.h"
/**
 * jack_bauer - Write a function that -
 * Description prints every minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59.
 */
void jack_bauer(void);
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60, m++)
		{
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(':');
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n');
		}
	}
}
