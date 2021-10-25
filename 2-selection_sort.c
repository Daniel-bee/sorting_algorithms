#include "sort.h"
void switch_(int *, int, int);
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
			switch_(array, min, i);
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
/**
 *switch_ - swap value
 *@list: array list
 *@min: min value index
 *@i: next index
 */
void switch_(int *list, int min, int i)
{
	int temp = list[min];

	list[min] = list[i];
	list[i] = temp;	
}
