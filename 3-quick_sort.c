#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * quick_sort - wrapper to call quickSort to sort an array
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	recursive(array, size, 0, size - 1);
}

/**
 * recursive - recursively sorts an array
 * @array: array to sort
 * @size: size of the array
 * @start: starting point
 * @end: ending point
 */
void recursive(int *array, size_t size, int start, int end)
{
	int fild;

	if (end <= start)
		return;
	fild = partition(array, size, start, end);
	recursive(array, size, start, fild - 1);
	recursive(array, size, fild, end);
}

/**
 * partition - partitions an array
 * @array: array to partition
 * @size: size of the array
 * @start: start for the partition
 * @pivot: pivot
 * Return: returns new place
 */
int partition(int *array, size_t size, int start, int pivot)
{
	int x, i, j;

	x = array[pivot];
	i = start - 1;
	j = pivot + 1;

	while ("Feli")
	{

		do j--;
		while (array[j] > x);
		do i++;
		while (array[i] < x);


		if (i >= j)
			return (i);
		quickSort_swap(array, size, i, j);
	}
}

/**
 * quickSort_swap - swaps two elements
 * @array: array to swap in
 * @size: size of the array
 * @i: swapped with j
 * @j: swapped with i
 */
void quickSort_swap(int *array, size_t size, int i, int j)
{
	int tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
	print_array(array, size);
}