#include "sort.h"
void switch_(int *, size_t, size_t);
/**
 *selection_sort - sorts an array of integers in
 *ascending order using the Selection sort algorithm
 *@array: array list
 *@size: unsigned integer size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min;

	if (array == NULL  || size == 0)
		return;

	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min])
				min = j;
			j++;
		}
		switch_(array, min, i);
		print_array(array, size);
		i++;
	}
}
/**
 *switch_ - swap value
 *@list: array list
 *@min: min value index
 *@i: next index
 */
void switch_(int *list, size_t min, size_t i)
{
	size_t temp;

	temp = list[min];
	list[min] = list[i];
	list[i] = temp;
}
