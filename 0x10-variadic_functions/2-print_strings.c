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


	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(len, n);

	for (i = 0; i < n; i++)
	{
		/*if (va_arg(len, char*) != NULL) */
			printf("%s", va_arg(len, char*));
			/*	else
			printf("(nil)");
		*/
		if (separator == NULL)
			separator = "";
		if (i != (n-1))
			printf("%s", separator);
	}
	va_end(len);
	printf("\n");
}
