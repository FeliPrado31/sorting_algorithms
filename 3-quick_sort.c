#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - wrapper to call quickSort to sort an array
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array && size)
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
	ssize_t partition;

	if (start < end)
	{
		partition = handle_partition(array, size, start, end);
		recursive(array, size, start, partition - 1);
		recursive(array, size, partition + 1, end);
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
size_t handle_partition(int *array, size_t size, ssize_t start, ssize_t end)
{
	ssize_t partition = start;

	while (partition < end)
	{
		if (array[partition] < array[end])
		{
			if (start != partition)
			{
				array[start] ^= array[partition];
				array[partition] ^= array[start];
				array[start] ^= array[partition];
				print_array(array, size);
			}
			start += 1;
		}
		partition += 1;
	}
	if (array[start] != array[end])
	{
		array[start] ^= array[end];
		array[end] ^= array[start];
		array[start] ^= array[end];
		print_array(array, size);
	}
	return (start);
}

