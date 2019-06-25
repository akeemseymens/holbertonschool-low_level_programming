#include "holberton.h"
/**
 *print_alphabet - check the code.
 *
 *Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int n = 0;
	int i;

	while (n <= 10)

	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar ('\n');
		n++;
	}

}
