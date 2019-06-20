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
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
