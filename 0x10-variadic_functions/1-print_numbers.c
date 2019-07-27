#include "variadic_functions.h"

/**
 * print_numbers - functions that prints number, by a new line..
 * @separator: pointer char for the seperator.
 * @n: numbers of integers passed through the functions.
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pnum;

	unsigned int i;
	int args;

	if (n == 0)
		return;
	va_start(pnum, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(pnum, int);
		if (i != 0)
		{
			printf("%s", separator);
		}
		printf("%d", args);
	}
	va_end(pnum);
	printf("\n");
}
