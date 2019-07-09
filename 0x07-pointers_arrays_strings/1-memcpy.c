#include "holberton.h"
/**
 * _memcpy - A function that fills memory with constant byte.
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int.
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
