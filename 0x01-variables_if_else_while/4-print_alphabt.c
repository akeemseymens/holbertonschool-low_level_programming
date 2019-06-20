/**
 * main - Entry point
 * Description -print alphabet and go past e and q.
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
