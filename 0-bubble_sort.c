#include "sort.h"

/**
 * bubble_sort - Write a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array with the numbers
 * @size: len of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0;
	_Bool swapped = false;

	if  (!array || size < 2)
		return;
	do {
		swapped = false;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
				swapped = true;
			}
		}
	} while (swapped);
}

/**
 * swap - Swap func to swap
 * @a: storage first val
 * @b: storage second val
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
