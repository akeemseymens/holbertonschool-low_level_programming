#include "holberton.h"
/**
 * _strncpy - Write a function that copy a string.
 * @dest: char pointer.
 * @src: char pointer
 * @n: integer.
 * Return: Always dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i;

	for (i = 0; i < n &&  *src != '\0'; i++)
		*tmp++ = *src++;
	for (; i < n; i++)
		*tmp++ = '\0';

	return (dest);
}
