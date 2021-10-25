#include "sort.h"
/**
 *selection_sort - sorts an array of integers in
 *ascending order using the Selection sort algorithm
 *@array: array list
 *@size: unsigned integer size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0, temp, min;

	if (array == NULL  || size == 0)
		return;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
			j++;
		}
		if (min != i)
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
		}
		j = 0;
		while (j < size - 1)
		{
			printf("%d, ", array[j]);
			j++;
		}
		printf("%d\n", array[size - 1]);

		i++;
	}
}
