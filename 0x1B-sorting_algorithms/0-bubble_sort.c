#include "sort.h"

/**
 * bubble_sort -
 *@array - array that is being sorted
 *@size - size of the array.
 * Return: printed sort array until completion.
 */
void bubble_sort(int *array, size_t size)
{
	int flag;
	unsigned i, tmp;

	if (!array)
		return;

	do
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i+1])
			{
				tmp = array[i+1];
				array[i+1] = array[i];
				array[i] = tmp;
				flag = 1;
				print_array(array, size);
			}
		}
	}while (flag);
}
