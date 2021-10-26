#include "sort.h"
int hoare_partition(int *, int, int);
void quick_(int *, int, int);
void swap(int *, int, int);
/**
 *quick_sort_hoare - sorts an array of integers in ascending
 *order using the Quick sort algorithm
 *@array: list
 *@size:array size
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return;
	quick_(array, 0, size - 1);
}
/**
 *hoare_partition - partition to right high and left low
 *@list: array list
 *@left: low index
 *@right: right index
 *Return: index
 */
int hoare_partition(int *list, int left, int right)
{
	int pivot = list[left];
	int i = left - 1, j = right + 1;
	static int size, c;

	if (c == 0)
		size = right + 1, c++;

	while (1)
	{
		do {
			i++;
		} while (list[i] < pivot);
		do {
			j--;
		} while (list[j] > pivot);

		if (i >= j)
			return (j);
		swap(list, i, j);
		print_array(list, size);
	}
	return (-1);
}
/**
 *quick_ - pass element index
 *@list: array list
 *@left: left index
 *@right: right index
 */
void quick_(int *list, int left, int right)
{
	int pi;

	if (left < right)
	{
		pi = hoare_partition(list, left, right);
		quick_(list, left, pi);
		quick_(list, pi + 1, right);
	}
}
/**
 *swap - exchange value
 *@list: array
 *@x: left index
 *@y: right index
 */
void swap(int *list, int x, int y)
{
	int temp = list[x];

	list[x] = list[y];
	list[y] = temp;
}
