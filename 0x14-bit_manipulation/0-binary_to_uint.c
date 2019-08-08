#include "holberton.h"

/**
 * binary_to_uint - a function that converts/
 * a binary number to an unsigned int.
 *@b: binary string.
 * Return: the convertted number, or 0 if the char is not 0 or 1 or Null for b.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);

	while (*b)
	{
		n <<= 1;

		if (*b == '1')
			n += 1;
		else if (*b != '0')
			return (0);
		++b;
	}
	return (n);
}
