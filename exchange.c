#include "sort.h"
/**
 * exchange - swap array elements
 * @array: list of integer array elements
 * @start_index: first index value
 * @next_index: next index
 */
void exchange(int *array, int start_index, int next_index)
{
	int temp;

	temp = array[start_index];
	array[start_index] = array[next_index];
	array[next_index] = temp;
}
/**
 * display - display ddl list
 * @head: list
 */
void display(listint_t *head)
{
	listint_t *trav;

	trav = head;
	while (trav->prev != NULL)
		trav = trav->prev;
	print_list(trav);

}
/**
 * exchangeData - Exchange two nodes tail and head position
 * @list: list
 * @temp: temp list
 **/
void exchangeData(listint_t *list, listint_t *temp)
{
	temp = list->prev;
	if (temp != NULL)
	{
		temp->next = list->next;
		list->next->prev = temp;
	}
	else
		list->next->prev = NULL;
	list->prev = list->next;
	if (list->next->next != NULL)
	{
		list->next = list->next->next;
		list->prev->next = list;
		list->next->prev = list;
	}
	else
	{
		list->next->next = list;
		list->next = NULL;
	}
	display(list);
	while (list->prev != NULL)
	{
		if (list->n < list->prev->n)
		{
			temp = list->prev->prev;
			list->prev->next = list->next;
			list->next = list->prev;
			list->prev->prev = list;
			list->prev = temp;
			list->next->next->prev = list->next;
			if (temp != NULL)
				temp->next = list;
			display(list);
		}
		else
			list = list->prev;
	}
}
