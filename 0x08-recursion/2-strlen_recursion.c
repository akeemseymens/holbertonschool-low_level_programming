#include "holberton.h"

/**
 * _strlen_recursion
 *@s: pointer variable
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
		_putchar('\n');
	}
	return (1 + _strlen_recursion(s + 1));
}
