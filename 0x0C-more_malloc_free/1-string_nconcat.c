#include "holberton.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: character pointer.
 * @s2: character pointer.
 * @n: unsigned integers.
 * Return: Always array.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tmp;
	unsigned int len, c1, c2, i, j;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c1 = _strlen(s1);
	c2 = n;

	len = c1 + c2;

	tmp = malloc(sizeof(char) * (len + 1));

	if (tmp == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
		tmp[i] = s1[i];
	for (j = 0; j < n; j++)
		tmp[j + i] = s2[j];
	tmp[i + j] = '\0';

	return (tmp);
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
