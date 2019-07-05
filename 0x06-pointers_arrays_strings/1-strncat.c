#include "holberton.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: char pointer.
 * @src: char pointer
 * Return: Always dest.
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*tmp)
		tmp++;

	while (i < n && src[i] != '/0')
		*tmp++ = *src++;

	*tmp++ = '\0';

	return (dest);
}
