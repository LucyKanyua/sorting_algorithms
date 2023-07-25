#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to sort
 * @size: size of the array to be sorted
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int temp, swp, min;
	size_t p, q;

	for (p = 0; i < size; p++)
	{
		swp = p;
		min = array[p];
		for (q = p + 1; q < size; q++)
		{
			if (array[q] < min)
			{
				min = array[q];
				swp = q;
			}
		}
		if (min != array[p])
		{
			temp = array[p];
			array[p] = min;
			array[swp] = temp;
			print_array(array, size);
		}
	}
}
