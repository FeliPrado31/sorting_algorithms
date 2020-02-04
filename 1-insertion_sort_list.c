#include "sort.h"

/**
 * insertion_sort_list - Write a function that sorts a 
 * doubly linked list of integers in ascending order using the Insertion sort algorithm
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
    listint_t tmp, prev, next;

    tmp = (*list)->next;
    next = tmp->next;
    
}