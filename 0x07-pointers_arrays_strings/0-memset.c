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

	while (--n)
	{
		*s++ = b;
	}

	return (s);
}
