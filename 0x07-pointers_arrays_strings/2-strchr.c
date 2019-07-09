#include "holberton.h"
/**
 * _strchr - A function that fills memory with constant byte.
 * @s: char pointer
 * @c: char value
 *
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return ('\0');
	}
	return (s);
}
