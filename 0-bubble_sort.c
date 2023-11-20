#include "sort.h"

/**
 * bubble_sort - use bubble sort to sort an array
 * @array: integer array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, ns = size;
	int swap, tmp;

	if (!array || size < 2)
		return;

	while (ns)
	{
		swap = 0;
		for (; i < ns - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
		ns--;
		if (!swap)
			break;
	}

}
