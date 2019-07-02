#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints n elements of an array of integer & new line.
 * @dest: char
 * @src: char string.
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{

	while ((*dest++ = *src++) != '\0')
		;
	return (dest);
}
