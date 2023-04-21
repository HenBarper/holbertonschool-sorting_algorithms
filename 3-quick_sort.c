#include "sort.h"

/**
 * quick_sort - sort array with qucik sort alg
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	size_t i = 0, j, pivot;
	int temp;

	pivot = size;

	if (array[i] > array[pivot])
	{
		temp = array[i];
		array[i] = array[pivot];
		array[pivot] = temp;
		print_array(array, size);
		i++;
	}
	else
	{
		pivot--;
	}
}
