#include "sort.h"

/**
 * bubble_sort - order an array of size(size) using bubble sort algorithm
 * @array: The array
 * @size: the size of the array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	int temp = 0, count = 0;
	size_t i = 0;

	if (array == NULL || size < 2)
		return;

	while (1)
	{
		count = 0;
		for (i = 0; i < size; i++)
		{
			while (array[i] > array[i + 1] && i + 1 < size)
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				count++;
			}
		}
		if (count == 0)
			break;
	}
}
