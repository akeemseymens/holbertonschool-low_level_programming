#include "holberton.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: char
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len, i;

	for (len = 0; str[len] != '\0'; len++)
		;

	for (i = (len + 1) / 2; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
