#include "holberton.h"

/**
 * swap_int - takes a pion to an int and updates to 98.
 * @a: int pointer.
 * @b: int pointer.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
