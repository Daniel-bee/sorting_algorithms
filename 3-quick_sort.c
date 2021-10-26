#include "sort.h"
int lomuto_partition(int *, int, int);
void quick_(int *, int, int);
void swap(int *, int, int);
/**
 *quick_sort - sorts an array of integers in ascending
 *order using the Quick sort algorithm
 *@array: list
 *@size:array size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return;
	quick_(array, 0, size - 1);
}
/**
 *lomuto_partition - partition to right high and left low
 *@list: array list
 *@left: low index
 *@right: right index
 *Return: index
 */
int lomuto_partition(int *list, int left, int right)
{
	int pivot = list[right];
	int i = left, j;
	static int size, c;

	if (c == 0)
		size = right + 1, c++;
	for (j = left; j < right; j++)
	{
		if (list[j] <= pivot)
		{
			if (i != j)
			{
				swap(list, i, j);
				print_array(list, size);
			}
			i++;
		}
	}
	if (i != right)
	{
		swap(list, i, right);
		print_array(list, size);
	}
	return (i);
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
		pi = lomuto_partition(list, left, right);
		quick_(list, left, pi - 1);
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
