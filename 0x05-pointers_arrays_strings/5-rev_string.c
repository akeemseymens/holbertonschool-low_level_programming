#include "holberton.h"

/**
 * print_rev - a functions that prints, in reverse followed by newline.
 * @s: character pointer.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char *p = s;
	int count, temp;

	while (*s != '\0')
	{
		count++;
		s++;

	}

	s--;
	count = count / 2;

	for (; count > 0; count--, p++, s--)
	{
		temp = *p;
		*p = *s;
		*s = temp;
	}

	_putchar('\n');
}
