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
	if (start < end)
	{
		size_t p = partition(array, size, start, end);

		recursive(array, size, start, p - 1);
		recursive(array, size, p + 1, end);
	}
}

/**
 * partition - partitions an array
 * @array: array to partition
 * @size: size of the array
 * @start: start for the partition
 * @end: pivot
 * Return: returns new place
 */
size_t partition(int *array, size_t size, ssize_t start, ssize_t end)
{
	int i;
	int j;
	int pivot;

	pivot = array[end];

	for (i = j = start; j < end; j++)
		if (array[j] < pivot)
			quickSort_swap(array, size, &array[j], &array[i++]);
	quickSort_swap(array, size, &array[i], &array[end]);

	return (i);
}

/**
 * quickSort_swap - swaps two elements
 * @array: array to swap in
 * @size: size of the array
 * @a: swapped with j
 * @b: swapped with i
 */
void quickSort_swap(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}
