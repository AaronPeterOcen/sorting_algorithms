#include "sort.h"
/**
 * counting_sort - sorts an array of integers in ascending
 * order using the Counting sort algorithm
 * @array: pointer to array
 * @size: size of the array
 **/
void counting_sort(int *array, size_t size)
{
	int n, j, *carray, *au;
	size_t i = 0;

	if (!array || size < 2)
		return;

	n = array[0];
	for (i = 0; i < size; i++)
	{
		if (array[i] > n)
			n = array[i];
	}
	carray = calloc((n + 1), sizeof(int));
	for (i = 0; i < size; i++)
	{
		carray[array[i]]++;
	}

	for (j = 1; j < n; j++)
	{
		carray[j + 1] += carray[j];
	}
	print_array(carray, n + 1);
	au = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
	{
		carray[array[i]]--;
		au[carray[array[i]]] = array[i];
	}
	for (i = 0; i < size; i++)
	{
		array[i] = au[i];
	}
	free(au);
	free(carray);
}
