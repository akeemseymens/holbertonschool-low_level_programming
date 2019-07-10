#include "holberton.h"

/**
 * *_strstr - find needle in haystack and return pointer to substring.
 * @haystack: char ptr
 * @needle: char ptr
 *
 * Return: Always 0.
 */

char  *_strstr(char *haystack, char *needle)
{
	char *start;

	for (start = haystack; *start != '\0'; start++)
	{
		char *p = needle;
		char *q = start;

		while (*p != '\0' && *q != '\0' && *p == *q)
		{
			p++;
			q++;
		}
		if (*p == '\0')
			return (start);
	}
	return ('\0');
}
