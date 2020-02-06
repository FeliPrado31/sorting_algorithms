#ifndef SORT
#define SORT

/*INCLUDES*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>
#include <unistd.h>

/* MACROS */

/* STRUCTURES */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* FILES */

/*print_list.c*/
void print_list(const listint_t *list);

/*print_array.c*/
void print_array(const int *array, size_t size);

/*0-bubble_sort.c*/
void bubble_sort(int *array, size_t size);
void swap(int *a, int *b);

/*1-insertion_sort_list.c*/
void insertion_sort_list(listint_t **list);
void swap_node(listint_t *tmp, listint_t *next, listint_t *prev, listint_t **list);

/*2-selection_sort.c*/
void selection_sort(int *array, size_t size);

/*3-quick_sort.c*/
void quick_sort(int *array, size_t size);
void recursive(int *array, size_t size, ssize_t start, ssize_t end);
size_t partition(int *array, size_t size, ssize_t start, ssize_t end);
void quickSort_swap(int *array, size_t size, int *a, int *b);

#endif
