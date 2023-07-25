#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *			order
 *			using the Insertion sort algorithm with sentinel node
 * @list: Double pointer to the head of the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *back = NULL;
	listint_t *current = (*list)->next;
	listint_t *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	while (current != NULL)
	{
		back = current->prev;
		tmp = current->next;

		while (back != NULL && back->n > current->n)
		{
			back->next = current->next;

			if (current->next != NULL)
				current->next->prev = back;

			current->prev = back->prev;
			current->next = back;

			if (back->prev != NULL)
				back->prev->next = current;
			else
				*list = current;

			back->prev = current;
			back = current->prev;

			print_list(*list);
		}
		current = tmp;
	}
}
