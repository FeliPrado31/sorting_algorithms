#include "sort.h"

/**
 * insertion_sort_list - Write a function that sorts a
 * doubly linked list of integers in ascending order
 * using the Insertion sort algorithm
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *prev, *next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	tmp = (*list)->next;
	next = tmp->next;
	prev = tmp->prev;

	while (tmp)
	{
		if (tmp->n < prev->n)
			swap_node(tmp, next, prev, list);
		tmp = next;
		if (tmp)
		{
			next = tmp->next;
			prev = tmp->prev;
		}
	}
}

/**
 * swap_node - Swap func to swap
 * @tmp: storage first val
 * @next: storage second val
 * @prev: prev node
 * @l: list
 */

void swap_node(listint_t *tmp, listint_t *next, listint_t *prev, listint_t **l)
{
	while (prev && tmp->n < prev->n)
	{
		if (next)
		{
			next->prev = prev;
		}

		tmp->next = prev;
		tmp->prev = prev->prev;

		if (prev->prev)
		{
			(prev->prev)->next = tmp;
		}

		prev->prev = tmp;
		prev->next = next;

		next = prev;
		prev = tmp->prev;

		if ((*l)->prev)
		{
			*l = (*l)->prev;
		}
		print_list(*l);
	}
}
