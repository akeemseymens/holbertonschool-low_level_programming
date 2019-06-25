#include "holberton.h"
/**
 *print_alphabet - check the code.
 *
 *Return: Always 0.
 */
void print_alphabet(void)
{
	int n = 97;
	/* loop condition */
	while (n <= 122)
	{
		_putchar(n);
		++n;
	}
	_putchar ('\n');
}
