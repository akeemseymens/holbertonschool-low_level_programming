#include "holberton.h"
/**
 * print_number - prints an integer.
 * @n:  integer
 * Description: using recurision of a function we can print the number.
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
