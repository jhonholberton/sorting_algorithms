#include "sort.h"
/**
  * swap - Swap the passed value for parameters.
  * @xp: Index of the first value.
  * @yp: Index of the second value.
  * @array: Array of integers.
  * @size: Size of the array.
  */
void swap(int *xp, int *yp, int *array, size_t size)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
	if (*xp != *yp)
		print_array(array, size);
}
/**
  * partition - Function that implements the partition scheme.
  * @arr: Pointer that points to the array.
  * @low: Minimum index.
  * @high: Maximum index.
  * @size: Size of the array.
  * Return: The number of the partition.
  */
int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1), j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j], arr, size);
		}
	}
	swap(&arr[i + 1], &arr[high], arr, size);
	return (i + 1);
}

/**
* quicksort - Sort a partition of an integer array.
* @arr: Pointer to the matrix.
* @low: Lowest index.
* @high: Highest index.
* @size: Size of the matrix.
*/
void quicksort(int *arr, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high, size);
		quicksort(arr, low, pi - 1, size);
		quicksort(arr, pi + 1, high, size);
	}
}
/**
* quick_sort - Sort an array of integers using the
* function above.
* @array: Array of integers.
* @size: Size of the array.
*/
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}
