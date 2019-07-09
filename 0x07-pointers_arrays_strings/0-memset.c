#include "holberton.h"
/**
 * _memset - A function that fills memory with constant byte.
 * @s: char pointer
 * @b: char pointer
 * @n: unsigned int.
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
