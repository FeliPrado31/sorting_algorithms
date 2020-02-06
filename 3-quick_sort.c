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
	int ext, temp, piv, inte = start - 1;

	if (start >= end)
		return;

	piv = array[end];

	for (ext = start; ext <= end; ext++)
	{
		if (array[ext] <= piv)
		{
			inte++;
			temp = array[inte];
			array[inte] = array[ext];
			array[ext] = temp;
			if (ext != inte)
			{
				print_array(array, size);
			}
		}
	}

	recursive(array, size, start, inte - 1);
	recursive(array, size, inte + 1, end);
}
