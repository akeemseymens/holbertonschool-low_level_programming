#include "holberton.h"
/**
 *print_alphabet - check the code.
 *
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
