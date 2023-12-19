#include "sort.h"

/**
 * selection_sort - sorts array in ascending order
 * @array: the array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	int selected, temp;
	size_t i, j;

	if (size >= 2)
	{
		for (i = 0; i < size; i++)
		{
			selected = array[i];
			for (j = i; j < size; j++)
			{
				if (selected > array[j])
				{
					temp = array[j];
					array[j] = selected;
					selected = temp;
				}
			}
			array[i] = selected;
			print_array(array, size);
		}
	}
}
