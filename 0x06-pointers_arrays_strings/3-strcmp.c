#include "holberton.h"
/**
 * _strcmp - Write a function that compares two strings.
 * @s1: char pointer.
 * @s2: char pointe
 * Return: Always dest.
 */
int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 == *s2; s1++, s2++)
	{
		if (*s1 == '\0')
			return (0);
	}
	return (*s1 - *s2);
}
