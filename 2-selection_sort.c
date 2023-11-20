#include "sort.h"

/**
 * swap_ints - Swap two integers in the array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_integers(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *mn;
	size_t i = 0, j;

	if (!array || size < 2)
		return;

	while (i < size)
	{
		mn = array + i;
		for (j = i + 1; j < size; j++)
			mn = (array[j] < *mn) ? (array + j) : mn;

		if ((array + i) != mn)
		{
			swap_integers(array + i, mn);
			print_array(array, size);
		}
		i++;
	}
}
