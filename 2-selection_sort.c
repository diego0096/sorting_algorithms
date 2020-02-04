#include "sort.h"
/**
 * selection_sort - sorts a list
 *
 * @array: The list to be sorted
 * @size: The size of the list
 */
void selection_sort(int *array, size_t size)
{
	size_t a = 0, b = 0, c = 0, d = 0;

	if (array == NULL || size == 0)
		return;
	for ( ; a < size - 1; a++)
	{
		c = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[c])
				c = b;
		}
		if (array[c] == array[a])
			continue;
		d = array[c];
		array[c] = array[a];
		array[a] = d;
		print_array(array, size);
	}
}
