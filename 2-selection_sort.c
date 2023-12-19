#include "sort.h"

/**
 * selection_sort - sorts array in ascending order
 * @array: the array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	if (size >= 2)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				if (array[i] > array[j])
				{
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
				}
			}
			print_array(array, size);
		}
	}
}
