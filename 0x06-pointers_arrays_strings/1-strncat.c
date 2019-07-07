#include "holberton.h"
/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: char pointer.
 * @src: char pointer.
 * @n: int interger.
 * Return: returns dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i = 0;

	while (*tmp)
		tmp++;

	while (i < n && src[i])
		i++;

	if (src + i < dest || tmp + i < src)
	{
		while (i--)
			*tmp++ = *src++;
		*tmp = '\0';
	}

	return (dest);
}
