#include "sort.h"

/**
* insertion_sort_list - function that sorts a doubly linked list of
* integers with insertion sort algorithm.
* @list: doubly linked list
*
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *a_node, *b_node;

	if (list == NULL || *list == NULL)
		return;

	b_node = (*list)->next;

	while (b_node)
	{
		a_node = (*b_node).next;
		while ((*b_node).prev && (*b_node).n < (*b_node).prev->n)
		{
			(*b_node).prev->next = (*b_node).next;
			if ((*b_node).next)
				(*b_node).next->prev = (*b_node).prev;
			(*b_node).next = (*b_node).prev;
			if ((*b_node).next)
			{
				(*b_node).prev = (*b_node).next->prev;
				(*b_node).next->prev = b_node;
			}
			if ((*b_node).prev)
				(*b_node).prev->next = b_node;
			else
				(*list) = b_node;
			print_list(*list);
		}
		b_node = a_node;
	}
}