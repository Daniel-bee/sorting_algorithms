#include "sort.h"
int lomuto_partition(int *, int, int, int);
void quick_(int *, int, int, int);
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
	quick_(array, 0, size - 1, size);

}
/**
 *lomuto_partition - partition to right high and left low
 *@list: array list
 *@left: low index
 *@right: right index
 *@size: array length
 *Return: index
 */
int lomuto_partition(int *list, int left, int right, int size)
{
	int pivot = list[right], temp;
	int i = left - 1, j;

	for (j = left; j < right; j++)
	{
		if (list[j] <= pivot)
		{
			if (i != j)
			{
				i++;
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
				print_array(list, size);
			}
		}
	}
	if (i != right)
	{
		temp = list[i + 1];
		list[i + 1] = list[right];
		list[right] = temp;
	}
	return (i + 1);
}
/**
 *quick_ - pass element index
 *@list: array list
 *@left: left index
 *@right: right index
 *@size: array length
 */
void quick_(int *list, int left, int right, int size)
{
	int pi = lomuto_partition(list, left, right, size);


	if (left < right)
	{
		quick_(list, left, pi - 1, size);
		quick_(list, pi + 1, right, size);
	}
}
