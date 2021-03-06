int hlpr_func(int n, int m);
/**
 *_sqrt_recursion - a function that returns the natural sqrt of a number.
 *
 *@n: integer.
 *.
 * Return: square root function.
 */

int _sqrt_recursion(int n)
{
	return (hlpr_func(n, 0));
}

/**
 *hlpr_func - heavy lifter or loop function.
 *@n: integer
 *@m: integer
 *Return: helper function
 */

int hlpr_func(int n, int m)
{
	int prod = m * m;

	if (prod == n)
		return (m);
	else if (prod > n)
		return (-1);

	return (hlpr_func(n, m + 1));
}
