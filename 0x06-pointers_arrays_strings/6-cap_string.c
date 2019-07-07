#include "holberton.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: char pointer.
 *
 * Return: returns the string.
 */
char *cap_string(char *s)
{
	char *sc = " \t\n,;.!?\"(){}";
	int i;
	int j;

	for (i = 0, j = 0; s[i]; s++)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			if (i)
			{
				for (j = 0; sc[j] && sc[j] != s[i - 1]; j++)
					;
			}

			if (sc[j])
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
