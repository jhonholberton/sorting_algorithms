#include "sort.h"
/**
  * selection_sort - Sort a matrix following the
  * sort by selection.
  * @array: Array to sort.
  * @size: Size of the array.
  */
void selection_sort(int *array, size_t size)
{
	size_t index_2, index_1, minimo;
	int temporal, comprobar;

		for (index_1 = 0; index_1 < size; index_1++)
		{
			comprobar = 0;
			minimo = index_1;

			for (index_2 = index_1 + 1; index_2 < size; index_2++)
			{
				if (array[minimo] > array[index_2])
				{
					minimo = index_2;
					comprobar = 1;
				}
			}
			temporal = array[index_1];
			array[index_1] = array[minimo];
			array[minimo] = temporal;
			if (comprobar == 1)
				print_array(array, size);
		}
}
