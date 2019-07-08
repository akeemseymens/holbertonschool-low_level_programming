#include "holberton.h"
/**
 * rot13 - encode a string into rot13.
 * @s: the string to encode
 *
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		while ((s[c] >= 'a' && s[c] <= 'z') ||
		       (s[c] >= 'A' && s[c] <= 'Z'))
		{
			if ((s[c] >= 'N' && s[c] <= 'Z') ||
			    (s[c] >= 'n' && s[c] <= 'z'))
				s[c] -= 13;
			else
				s[c] += 13;
			c++;
		}
		c++;
	}
	return (s);
}
