#include "sort.h"

/**
 * selection_sort - order an array using the algorithm selection_sort 
 * @array: the array
 * @size: the size of the array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, k = 0;
	int tmp = 0, dancer = 0;

	for (i = 0; i < size; i++)
	{
		dancer = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (dancer > array[j])
			{
				tmp = array[j];
				array[j] = dancer;
				dancer = tmp;
				for (k = j; k < size - 1; k++)
				{
					if (dancer > array[k + 1])
					{
						tmp = array[k + 1];
						array[k + 1] = dancer;
						dancer = tmp;
					}
				}
			}
		}
		array[i] = dancer;
		print_array(array, size);
	}
}
