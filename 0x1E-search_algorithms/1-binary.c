#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: array to search
 * @size: size of  array
 * @value: value to search
 *
 * Return: first index where value is found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, j, lw = 0, hi = size - 1;

	if (array == NULL)
		return (-1);;

	while (lw <= hi)
	{
		printf("Searching in array: ");
		for (j = lw; j <= hi; j++)
		{
			printf("%d", array[j]);
			if (j < hi)
				printf(", ");
		}
		printf("\n");
		i = lw + (hi - lw) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			lw = i + 1;
		else
			hi = i - 1;
	}
	return -1;
}
