#include "variadic_functions.h"
#include <strarg.h>

/**
 * sum_them_all - returns the summ of all its parameters.
 * @n: const unsigned integer variant.
 * Return: Always total (SUCESS)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	double total = 0.0;

	if (n == 0)
		return (0);

	va_start(sum, n);

	for (i = 0; i < n; i++)
		total = total + va_arg(sum, int);

	va_end(sum);

	return (total);
}
