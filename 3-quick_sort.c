#include "sort.h"

/**
 * quick_sort - sorts array in ascending order using quick sort algorithm
 * @array: the array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	int temp, j = 0, array_size = size - 1, pivot = array[size - 1];
	size_t i;
	
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] < array[array_size])
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			j++;
			print_array(array, size);
		}
	}
	array[size - 1] = array[j];
	array[j] = pivot;
	if (j > 0)
		quick_sort(array, j);
	if (size - j - 1 > 0)
		quick_sort(&array[j + 1], size - j - 1);
}
