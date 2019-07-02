#include "holberton.h"

/**
 * print_rev - a functions that prints, in reverse followed by newline.
 * @s: character pointer.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	while (i--)
	{

		_putchar(s[i]);

	}

	_putchar('\n');
}
