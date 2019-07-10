#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number.
 *@n: integer.
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n <= 0)
		return (-1);
	if (n <= 1)
	{
		return (1);
		_putchar('\n');
	}
	return (n * factorial(n - 1));
}
