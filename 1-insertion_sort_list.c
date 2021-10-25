#include "sort.h"
#include "exchange.c"
/**
 * insertion_sort_list -sort a doubly linked list with insert algorithm
 * @list: list
 *
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *cur_list;

	if ((list == NULL) || (*list == NULL) || ((*list)->next == NULL))
		return;
	cur_list = (*list);

	while (cur_list->next != NULL)
	{
		if (cur_list->n > cur_list->next->n)
			exchangeData(cur_list, (*list));
		else
			cur_list = cur_list->next;
	}
	while ((*list)->prev != NULL)
		*list = (*list)->prev;
}
