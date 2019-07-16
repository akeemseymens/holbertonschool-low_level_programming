#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *initializes it with a specific char.
 * @size : the size of the memory ot print.
 * @c: char that is being initialized.
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;

	char *s;

	s = malloc(sizeof(char) * size);
	if (s == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);

}
