/**
 * main - Entry point
 * Description -print alphabet in lowercase; followed by new line.
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != q && ch !=e)
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
