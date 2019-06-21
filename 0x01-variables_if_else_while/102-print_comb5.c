/**
 * main - Entry point
 * Description -print the numbers from 00 to 99
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = i + 1 ; j <= '9' ; j++)
		{
			for (k = j + 1 ; k <= '9' ; k++)
			{
				for (l = k + 1; k <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					putchar(l);
					if (!(l== '6' && i == '7' && j == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
