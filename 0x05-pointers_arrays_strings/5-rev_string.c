#include "holberton.h"

/**
 * rev_string - that reverse the string.
 * @s: character pointer.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
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
