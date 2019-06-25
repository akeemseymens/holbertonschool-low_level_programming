#include "holberton.h"
/**
 *is_alpha - check the code.
 *
 *Return: Always 0.
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
