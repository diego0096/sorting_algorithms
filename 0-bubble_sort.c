#include "sort.h"

/**
 * bubble_sort - C function that uses uses the Bubble sort method in an array
 * @array: array of integers to sort
 * @size: the size of the array to be sorted
 * Return: sorted array
 */

void bubble_sort(int *array, size_t size)
{
	size_t c = size;
	size_t i, t = 0;

	if (array == NULL || size == 0)
		return;
	while (c > 0)
	{
		for (i = 0; i < size - 1; i++)
	{
			if (array[i] > array[i + 1])
			{
				t = array[i + 1];
				array[i + 1] = array[i];
				array[i] = t;
				print_array(array, size);
			}
		}
		c--;
	}
}
