#include "sort.h"

/**
 * bubble_sort - sorts array of ints using bubble sort
 * @array: array to sort
 * @size: size of array to sort
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t step, i;
	int temp;

	if (array == NULL)
		return;

	for (step = 0; step < size - 1; ++step)
	{
		for (i = 0; i < size - step - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
