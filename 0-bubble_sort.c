#include "sort.h"

/**
 * bubble_sort - Bubble sorting algorithm
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	/*size_t j;*/
	int temp;
	int flag = 0;

	while (flag == 0)
	{
		flag = 1;
		for (i = 0 ; i < size ; i++)
		{
			if (array[i] > (array[i + 1]) && i < size - 1)
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				flag = 0;
			}
		}
	}
}
