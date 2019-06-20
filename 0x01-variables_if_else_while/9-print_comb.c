/**
 * main - Entry point
 * Description -print hexidecimal on terminal
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + ',');
	}

	putchar('\n');

	return (0);
}
