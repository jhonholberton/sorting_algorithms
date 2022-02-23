#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in
 *               ascending order using the Bubble sort algorithm
 * @array: The array
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t temp, len = size;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, len);
			}
		}
	}
}
