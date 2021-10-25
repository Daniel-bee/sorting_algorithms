#include "sort.h"
void switch_(int *, unsigned int, unsigned int);
/**
 *selection_sort - sorts an array of integers in
 *ascending order using the Selection sort algorithm
 *@array: array list
 *@size: unsigned integer size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0, min;

	if (array == NULL  || size == 0)
		return;
	while (i < size -1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min])
				min = j;

			if (min != i)
			{
				switch_(array, min, i);
				print_array(array, size);
			}
		j++;
		}
		i++;
	}
}
/**
 *switch_ - swap value
 *@list: array list
 *@min: min value index
 *@i: next index
 */
void switch_(int *list, unsigned int min, unsigned int i)
{
	unsigned int temp = list[min];

	list[min] = list[i];
	list[i] = temp;
}
