#include "holberton.h"
/**
 * _isupper - checks for uppercase characters.
 * @c: is an int.
 * Return: Always 0 for lower and 1 for lower.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
	else
		return (0);
}
