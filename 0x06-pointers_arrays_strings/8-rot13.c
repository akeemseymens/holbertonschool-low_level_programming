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
	int i = 0;
	char set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *tmp = s;

	for (; *s != '\0'; s++)
	{
		for (i = 0; set[i] != '\0'; i++)
		{
			if (*s == set[i])
			{
				*s = enc[i];
				break;
			}
		}
	}

	return (tmp);
}
