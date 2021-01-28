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

	while (1)
	{
		count = 0;
		for (i = 0; i < size; i++)
		{
			if ((i + 1) < size)
			{
				if (array[i] > array[i + 1] && count == 0)
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					count = 1;
				}
			}
			if (i + 1 == size)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (count == 0)
			break;
	}
}
