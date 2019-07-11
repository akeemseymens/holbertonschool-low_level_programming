#include "holberton.h"
int check_prime(int n, int m);
/**
 *is_prime_number - func returns 1 if the input integer a prime else return 0.
 *
 *@n: integer.
 *
 * Return: square root function.
 */

int is_prime_number(int n)
{
	int prime;

	if (n < 2)
		return (0);

	prime = check_prime(n, 2);

	return (prime);
}

/**
 *check_prime - heavy lifter or loop function.
 *@x: integer
 *@check: integer
 *Return: helper function
 */

int check_prime(int x, int check)
{
	if (x == check)
		return (1);

	else if (x % check != 0)
		return (check_prime(x, check + 1));

	else if (x % check == 0)
		return (0);

	else
		return (0);
}
