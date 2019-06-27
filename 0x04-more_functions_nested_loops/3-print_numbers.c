#include "holberton.h"
/**
 * print_numbers - prints numbers 0 to 9, followed by new line.
 * @i - int parameter.
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}
