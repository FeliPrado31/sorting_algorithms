#include "sort.h"

/**
 * selection_sort - Write a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array with the numbers
 * @size: len of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t swap;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		int index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
			{
				index = j;
			}
		}
		if (index != i)
		{
			swap = array[i];
			array[i] = array[index];
			array[index] = swap;
			print_array(array, size);
		}
	}
}
