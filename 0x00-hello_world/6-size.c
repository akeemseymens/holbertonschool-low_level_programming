#include <stdio.h>

/**
 * main - Entry point
 * prints str
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long));
	printf("Size of a long long int: &d byte(s)\n", sizeof(double));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}