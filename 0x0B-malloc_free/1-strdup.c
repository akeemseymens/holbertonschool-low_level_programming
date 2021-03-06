#include "holberton.h"

/**
 * _strdup - returns copy of new string in memory.
 * @str: string pointer.
 *
 * Return: string.
 */

char *_strdup(char *str)
{
	char *dest;
	int l, i;

	if (str == NULL)
		return (NULL);

	l = _strlen(str);
	dest = malloc(sizeof(char) * (l + 1));

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= l; i++)
		dest[i] = str[i];
	return (dest);

}

/**
 * _strlen - returns the length of a string.
 * @s: character pointer.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}
	return (p - s);
}
