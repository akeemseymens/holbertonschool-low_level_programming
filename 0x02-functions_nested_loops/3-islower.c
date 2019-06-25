#include "holberton.h"
/**
 * _islower - check the code.
 * @c: int
 *
 * Return: 1 if lower 0 if not.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
