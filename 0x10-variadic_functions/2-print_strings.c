#include "variadic_functions.h"

/**
 * print_strings - functions that prints string, followed by new line.
 * @separator: pointer char for the seperator.
 * @n: numbers of integers passed through the functions.
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list len;
	char *c;
	unsigned int i;


	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (!separator)
		separator = "";

	va_start(len, n);

	for (i = 1; i < n; i++)
	{
		c = va_arg(len, char *);
		printf("%s%s", (!c) ? "(nil)" : c, separator);
	}
        c = va_arg(len, char *);
	printf("%s\n", (!c) ? "(nil)" : c);

	va_end(len);

}
