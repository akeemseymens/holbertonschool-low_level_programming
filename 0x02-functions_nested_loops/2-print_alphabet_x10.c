#include "holberton.h"
/**
 *print_alphabet_x10 - print the alphabet ten times.
 *
 *Description: Print the alphabet ten times onto a different line.
 *Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char a;
	int i = 10;

	while (i--)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);

		_putchar('\n');
	}
}
