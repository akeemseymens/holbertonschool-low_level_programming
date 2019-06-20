/**
 * main - Entry point
 * Description -print alphabet and go past e and q.
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int n;

	for (n = 'z' ; n >= 'a' ; n--)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
