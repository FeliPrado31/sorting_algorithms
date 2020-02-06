#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - wrapper to call quickSort to sort an array
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	recursive(array, size, 0, size - 1);
}

/**
 * recursive - recursively sorts an array
 * @array: array to sort
 * @size: size of the array
 * @start: starting point
 * @end: ending point
 */
void recursive(int *array, size_t size, ssize_t start, ssize_t end)
{
	int index, tmp, pivot, first = start - 1;

	if (start >= end)
		return;

	pivot = array[end];

	for (index = start; index <= end; index++)
	{
		if (array[index] <= pivot)
		{
			first++;
			tmp = array[first];
			array[first] = array[index];
			array[index] = tmp;
			if (index != first)
			{
				print_array(array, size);
			}
		}
	}

	recursive(array, size, start, first - 1);
	recursive(array, size, first + 1, end);
}
