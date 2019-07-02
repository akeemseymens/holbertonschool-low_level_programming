#include "holberton.h"

/**
 * puts2 -   function that prints one char out of 2 of a string + a new line.
 * @s: character pointer.
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int x;

	for (x = 0; x < _strlen(str); str += 2)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}

int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}
	return (p - s);
}
