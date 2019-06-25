#include "holberton.h"
/**
 * print_last_digit - checks the code, last digit.
 * @r:  int
 *Return: Always 0.
 */
int print_last_digit(int r)
{
	int abs_n;
	int l;
	r = r % 10;
	r= r < 0 ? -r : r;
	_putchar (r);
	return (r);
}
