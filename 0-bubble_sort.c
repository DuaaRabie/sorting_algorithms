#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sorts an array in ascending using bubble sort
 * @array: array to be sorted
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, sw_size = size;
	bool swaped = true;

	if (size >= 2)
	{
		while (swaped == true)
		{
			swaped = false;
			for (i = 0; i + 1 < sw_size; i++)
			{
				if (array[i] > array[i + 1])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					swaped = true;
					for (j = 0; j < size; j++)
						printf("%d%s", array[j],
								(j < size - 1) ? ", " : "\n");
				}
			}
			sw_size--;
		}
	}
}
