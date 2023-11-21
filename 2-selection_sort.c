#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: array of integers
 *
 * @size: size of array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, minidx;
	int tmp;
	int flag;

	if (size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minidx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minidx])
			{
				minidx = j;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			tmp = array[minidx];
			array[minidx] = array[i];
			array[i] = tmp;
			print_array(array, size);
			flag = 0;
		}
	}
}
