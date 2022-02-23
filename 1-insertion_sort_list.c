#include "sort.h"
/**
*insertion_sort_list - function that sorts a doubly linked list
*@list: doubly linked list of integers
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *sort_next, *current;
	listint_t *sort_prev;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;

	while (current)
	{
		sort_next = current->next;
		sort_prev = current->prev;
		while (sort_prev != NULL && current->n < sort_prev->n)
		{
			sort_prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = sort_prev;
			current->prev = sort_prev->prev;
			current->next = sort_prev;
			if (sort_prev->prev != NULL)
				sort_prev->prev->next = current;
			else
				*list = current;
			sort_prev->prev = current;
			sort_prev = current->prev;
			print_list(*list);
		}
		current = sort_next;
	}
}
