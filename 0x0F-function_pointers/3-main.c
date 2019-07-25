#include <stdlib.h>
#include <stdio.h>
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
	if (argc != 4)
		exit(98);

	if (atio(argv[3]) == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		print("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func)(argv[2])(atio(argv[1]), atio(argv[3])));

	return (0);
}
