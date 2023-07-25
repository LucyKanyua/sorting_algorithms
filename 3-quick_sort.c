#include "sort.h"
/**
 * swap - swaps elements
 * @a: first element
 * @b: second element
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - Lamuto partition scheme
 * @arr: pointer to the array
 * @low: start index of the partion
 * @high: ending of the partion
 * Return: index of the pivot element
 */
int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int j, i = low - 1;

	for (j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr + low, high - low + 1);			}
		}
	}
	swap(&arr[i + 1], &arr[high]);
	print_array(arr + low, high - low + 1);
	return (i + 1);
}
/**
 * quick_sort - sort an array of intergers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	int pivot_i;

	if (size <= 1)
		return;
	pivot_i = partition(array, 0, size - 1);


	quick_sort(array, pivot_i);
	quick_sort(array + pivot_i + 1, size - pivot_i - 1);
}
