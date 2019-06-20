/**
 * main - Entry point
 * Description -print alphabet and go past e and q.
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
