#include <stdio.h>
/**
 * print_to_98 - Print nth number to 98.
 * @n: int
 *
 * Description: Holberton, 98 Battery Steet, the OG.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}
	printf("98\n");
}
