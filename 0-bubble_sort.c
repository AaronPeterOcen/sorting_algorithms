#include "sort.h"
/**
 * bubble_sort - sort array using bubble sort
 *
 * @array: array to be sorted
 * @size: size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	unsigned int j;

	if (!array || !size || size == 1)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (i = 0; j < size - 1; j++)
		{
			int tmp = 0;
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}	
		}
	}
}
