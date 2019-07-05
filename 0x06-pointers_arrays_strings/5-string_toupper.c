#include "holberton.h"
/**
 * _strcmp - Write a function that compares two strings.
 * @s: char pointer.
 * @t: integer.
 * void return
 */
char *string_toupper(char *s)
{
	char *t = s;

	for (; *s; s++)
	{
		if ((*s >= 'a') && (*s <= 'z'))
			*(s) = *(s) - 32;
	}
	return (t);
}
