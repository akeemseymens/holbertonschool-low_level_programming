#include "holberton.h"
/**
 * _strspn - A function that fills memory with constant byte.
 * @s: char pointer
 * @accept: char point
 *
 * Return: the i value.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
