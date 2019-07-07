#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: char pointer.
 * @n: integer.
 * void return
 */
void reverse_array(int *a, int n)
{
	int c;
	int *t;

	for (t = a + (n - 1); a < t; a++, t--)
	{
		c = *a;
		*a = *t;
		*t = c;
	}

}
