#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line to stdout.
 * @s: character pointer.
 *
 * Return: Always 0.
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
