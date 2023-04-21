#include "sort.h"

/**
 * selection_sort - sort doubl linked list with selection sort alg
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j;
	int temp = 0;
	int temp_i = 0;
	int flag = 0;

	while (i < (size - 1))
	{
		printf("top of while, i: %ld\n\n", i);
		flag = 0;
		printf("flag should be 0, flag: %d\n", flag);
		for (j = i + 1 ; j < size ; j++)
		{
			printf("top of for loop, i: %ld, j: %ld\n", i, j);
			printf("If flag == 0, flag: %d\n", flag);
			if (flag == 0)
			{
				printf("flag equalled 0\n\n");
				printf("if array[i] > array[j], i: %ld array[i]: %d, j: %ld, array[j}: %d\n", i, array[i], j, array[j]);
				if (array[i] > array[j])
				{
					flag = 1;
					printf("flag = 1, flag: %d\n", flag);
					temp = array[j];
					printf("temp = array[j], temp: %d, array[j]: %d, j: %ld\n", temp, array[j], j);
					temp_i = j;
					printf("temp_i = j, temp_i: %d, j: %ld\n\n", temp_i, j);
				}
			}
			else
			{
				printf("Else flag != 0, flag: %d\n", flag);
				printf("if temp > array[j], temp: %d, array[j]: %d, j: %ld\n", temp, array[j], j);
				if (temp > array[j])
				{
					temp = array[j];
					printf("temp = array[j], temp: %d, array[j]: %d, j: %ld\n", temp, array[j], j);
					temp_i = j;
					printf("temp_i = j, temp_i: %d, j: %ld\n\n", temp_i, j);
				}
			}
		}
		printf("if flag == 1, flag: %d\n", flag);
		if (flag == 1)
		{
			printf("flag equalled 1\n");
			array[temp_i] = array[i];
			printf("array[temp_i] = array[i], array[temp_i]: %d, array[i]: %d\n", array[temp_i], array[i]);
			array[i] = temp;
			printf("array[i] = temp, array[i]: %d, temp: %d\n\n", array[i], temp);
		}
		print_array(array, size);
		printf("array printed\n");
		i++;
		printf("i++, i: %ld\n", i);
	}
}
