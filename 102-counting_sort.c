#include "sort.h"

/**
 * counting_sort -
 * @array: The array
 * @size: The size of the array
 * Return: Nothing
 */

int largest_int(int *array, size_t size)
{
    size_t i = 0;
    int largest = 0;

    if (array == NULL || size == 0)
        return (0); 
    largest = array[0];
    for(; i < size; i++)
    {
        if (largest < array[i])
            largest = array[i];
    }

    return (largest);
}

int is_in(int *array, size_t size, int num)
{
    size_t i = 0;
    int count = 0;
 
    for(; i < size; i++)
    {
        if (array[i] == num)
            count++;
    }
    return (count);
}

void counting_sort(int *array, size_t size)
{
    int largest = 0, *count_array = NULL, count = 0; 
    int i = 0, j = 0, index = 0;

    if (array == NULL || size < 2)
        return;

    largest = largest_int(array, size);
    count_array = malloc(sizeof(int) * largest + 1);
    for (i = 0; i < largest + 1; i++)
    {
        count += is_in(array, size, i);
        count_array[i] = count;
        if (i != largest)
            printf("%d, ", count_array[i]);
        else
            printf("%d\n", count_array[i]);
    }
    for (i = 0; i < largest + 1; i++)
    {
        if(count_array[i + 1] > count_array[i] && i + 1 <= largest)
        {
            j = count_array[i + 1] - count_array[i];
            for(; j > 0; j--)
            {
                array[index++] = i + 1; 
            }
        }
    }
    free(count_array);
}

