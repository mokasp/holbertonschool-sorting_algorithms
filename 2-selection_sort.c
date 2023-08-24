#include "sort.h"

/**
 * selection_sort - sorts array of ints using selection sort
 * @array: array to sort
 * @size: size of array to sort
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t step, min, i;

	for (step = 0; step < size - 1; step++)
	{
		min = step;
		for (i = step + 1; i < size; i++)
		{
			if (array[i] < array[min])
				min = i;
		}
		if (min != step)
		{
			swap(&array[min], &array[step]);
			print_array(array, size);
		}
	}
}

/**
 * swap - swaps two elements of array
 * @a: first element
 * @b: second element
 *
 * Return: void
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
