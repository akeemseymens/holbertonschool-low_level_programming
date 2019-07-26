#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of args provided
 * @argv: args provided to the program
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, (*fn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		puts("Error");
		return (100);
	}
	fn = get_op_func(argv[2]);
	if (fn == NULL)
	{
		puts("Error");
		return (99);
	}
	printf("%d\n", fn(num1, num2));
	return (0);
}
