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

	unsigned int i;
	char *args;

	if (n == 0)
		return;
	va_start(len, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(len, char*);
		if (i != 0)
		{
			printf("%s", separator);
		}
		printf("%s", args);
	}
	va_end(len);
	printf("\n");
}
