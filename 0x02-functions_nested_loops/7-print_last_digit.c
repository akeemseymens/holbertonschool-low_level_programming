#include "holberton.h"
/**
 * print_last_digit - checks the code, last digit.
 * @r:  int
 *Return: Always 0.
 */
int print_last_digit(int r)
{
	if (r < 0)
		r = -r;
	r = r % 10;
	_putchar ('0' + r);
	return (r);
}
