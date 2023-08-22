#include "sort.h"

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

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
