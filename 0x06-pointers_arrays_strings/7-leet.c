#include "holberton.h"
/**
 * leet - encode a string into 1337.
 * @s: the string to encode
 *
 * Description: Characters are encoded as follows:
 * {'a', 'A'} -> '4'
 * {'e', 'E'} -> '3'
 * {'o', 'O'} -> '0'
 * {'t', 'T'} -> '7'
 * {'l', 'L'} -> '1'
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	char *c;
	int i;
	char key[15]= {
		'a', 'A', '4',
		'e', 'E', '3',
		'o', 'O', '0',
		't', 'T', '7',
		'l', 'L', '1'
	};

	for (c = s; *c; c++)
	{
		for (i = 0; i < 15; i += 3)
		{
			if (*c == key[i] || *c == key[i + 1])
				*c = key[i + 2];
		}
	}
	return (s);
}
