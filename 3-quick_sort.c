#include "sort.h"
/**
 * swap - C function to swap values on arrays
 * @a: pointer to array
 * @b: pointer to array
 * Return: swapped arrays
 */
void swap(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - C function to create a partition in an array for quick sort
 * @array: pointer to array to be partitioned
 * @low: low of array to be partitioned
 * @high: high of the array to be partioned, used as pivot
 * @size: size of array to be partitioned
 * Return: return partitioned array
 */
size_t partition(int *array, size_t low, size_t high, size_t size)
{
	size_t count;

	for (count = low; count < high; count++)
	{
		if (array[count] < array[high])
		{
			if (count != low)
			{
				swap(&array[low], &array[count]);
				print_array(array, size);
			}
			low++;
		}
	}
	if (array[low] > array[high])
	{
		swap(&array[low], &array[high]);
		high = low;
		print_array(array, size);
	}
	return (high);
}

/**
 * sort - C function to sort partitioned array
 * @array: pointer to array to be sorted
 * @low: low of array(left side of array)
 * @high: high of array(right side of array)
 * @size: size of array
 * Return: sorted partitions of array
 */
void sort(int *array, size_t low, size_t high, size_t size)
{
	size_t pIndex;

	if (high == 0 || high <= low)
		return;
	pIndex = partition(array, low, high, size);
	if (pIndex != 0 && pIndex > low)
		sort(array, low, pIndex - 1, size);
	if (pIndex < size - 1)
		sort(array, pIndex + 1, high, size);
}
/**
 * quick_sort - C function to perform quick sort
 * @array: array to be sorted
 * @size: size of array to be sorted
 * Return: sorted array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0 || size == 1)
		return;
	sort(array, 0, size - 1, size);
}
