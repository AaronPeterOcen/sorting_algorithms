#include "sort.h"

/**
 * bubble_sort - use bubble sort to sort an array
 * @array: integer array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j, swap = 0;
	int tmp;

	if (!array || size < 2)
		return;

	for (; i < size - 1; i++)
	{
		j = 1;
		for (; j < size - i; j++)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
				swap++;
			}
		}
		if (!swap)
			break;
	}
}
