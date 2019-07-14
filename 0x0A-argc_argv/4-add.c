#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print result of addition of arguments
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 passes a positive integer, or 1 if failed.
 */
int main(int argc, char *argv[])
{
	unsigned int sum;
	int i;

	sum = 0;
	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
			if (!isdigit(argv[argc][i]))
			{
				puts("Error");
				return (1);
			}

		sum += atoi(argv[argc]);
	}

	printf("%u\n", sum);

	return (0);
}
