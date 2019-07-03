#include "holberton.h"
/**
 * _strcpy - prints n elements of an array of integer & new line.
 * @dest: char
 * @src: char string.
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		*(dest + i) = *(src);
		i++;
		src++;
	}
	*(dest + i) = '\0';
	return (dest);
}
