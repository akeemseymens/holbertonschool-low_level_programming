#include "holberton.h"
/**
 * _strcmp - Write a function that compares two strings.
 * @a: char pointer.
 * @t: integer.
 * void return
 */
void reverse_array(int *a, int n)
{
        int c;
	int *t;

	for (t = a + (n-1); a < t; a++, t--)
	{
		c = *a;
		*a = *t;
		*t = c;
	}

}
