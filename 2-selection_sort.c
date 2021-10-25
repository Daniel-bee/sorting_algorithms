#include "sort.h"
/**void switch_(int *, int*);*/
/**
 *selection_sort - sorts an array of integers in
 *ascending order using the Selection sort algorithm
 *@array: array list
 *@size: unsigned integer size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min, temp;

	if (array == NULL  || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array, size);
	}
}
/**
 *switch_ - swap value
 *@min: min value index
 *@i: next index

void switch_(int *min, int *i)
{
	int temp;

	temp = *min;
	*min = *i;
	*i = temp;
}
*/
