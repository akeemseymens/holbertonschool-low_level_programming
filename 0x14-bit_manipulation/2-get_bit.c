#include "holberton.h"

/**
 * get_bit - check the code for Holberton School students.
 *@n: number being evaluated.
 *@index: number of interating.
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
