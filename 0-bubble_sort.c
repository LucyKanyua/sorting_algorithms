#include "sort.h"
#include <stddef.h>
/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t k, l;
	int temp;
	int swapped;

	for (k = 0; k < size; k++)
	{
		swapped = 0;
		for (l = 0; l < size - 1; l++)
		{
			if (array[l] > array[l + 1])
			{
				temp = array[1];
				array[l] = array[l + 1];
				array[l + 1] = temp;
				swapped = 1;

				print_array(array, size);
			}
		}
		if (swapped = 0)
			break;
	}
}
