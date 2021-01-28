#include "sort.h"

/**
 * print_array - print the elemnts of an array
 * @array: the array
 * @size: the size of the array
 * Return: Nothing
 */

void print_array(int *array, size_t size)
{
	size_t i = 0;

	for(; i < size; i++)
	{
		if (i + 1 == size)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}
