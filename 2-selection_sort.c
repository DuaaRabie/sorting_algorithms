#include "sort.h"

/**
 * selection_sort - sorts array in ascending order
 * @array: the array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	int temp, id;
	size_t i, j;
	bool swap = false;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			temp = array[i];
			for (j = i + 1; j < size; j++)
			{
				if (temp > array[j])
				{
					temp = array[j];
					id = j;
					swap = true;
				}
			}
			if (swap == true)
			{
				temp = array[i];
				array[i] = array[id];
				array[id] = temp;
				print_array(array, size);
				swap = false;
			}
		}
	}
}
