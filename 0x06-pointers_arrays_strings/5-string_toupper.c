#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: char pointer.
 *
 * Return: t to the function.
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
