#include "holberton.h"

/**
 *flip_bits - function that returns the number of bits/
 *you would need to flip to get from one number to another.
 *@n: number being evaluated.
 *@m: number being evaluated.
 * Return: count of flipped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int zor;
	unsigned long int count = 0;

	zor = n ^ m;

	while (zor)
	{
		if (zor & 1)
			count++;
		zor = zor >> 1;
	}
	return (count);
}
