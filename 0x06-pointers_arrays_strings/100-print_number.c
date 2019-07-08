#include "holberton.h"
/**
 * print_number - prints an integer.
 * @n:  integer
 * Description: using recurision of a function we can print the number.
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if (m >= 10)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}
