#include "sort.h"

void quick_sort(int *array, size_t size)
{
	int low, high;
	size_t tHigh;
	low = 0;
	tHigh = size;
	high = (int)tHigh;
	

	quickSort(array, low, high, size);
}

void quickSort(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high);
		quickSort(array, low, pi - 1, size);
		print_array(array, size);
		quickSort(array, pi + 1, high, size);
	}
}

int partition(int *array, int low, int high)
{
	int i, j;
	int pivot;

	pivot = array[high];
	i = (low - 1);
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}		
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

void swap(int *a, int *b)
{
	size_t tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
