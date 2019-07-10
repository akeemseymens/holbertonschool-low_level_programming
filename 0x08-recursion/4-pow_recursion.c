#include "holberton.h"

/**
 *_pow_recursion - returns value of x raised to the power of y.
 *@n: integer.
 *@y: nth power number
 * Return: Always 0.
 */

int _pow_recursion(int n, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	else
		return (n * _pow_recursion(n, y - 1));
}
