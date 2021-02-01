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

    

    return (count);
}

void counting_sort(int *array, size_t size)
{
    int largest = 0;

    largest = largest_int(array, size);
    printf("El numero maximo es %d\n", largest);
}

int main(void)
{
     int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    counting_sort(array, n);
    return (0);
}
