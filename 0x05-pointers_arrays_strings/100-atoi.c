#include "holberton.h"
/**
 * _atoi - string to integer
 *@s: char
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	unsigned int res = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0' ; ++i)
		res = res * 10 + s[i] - '0';

	return (sign * res);
}
