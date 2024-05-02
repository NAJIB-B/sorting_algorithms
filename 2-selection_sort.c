#include <stdio.h>
#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size; ++i)
	{
		min = i;

		for (j = (i + 1); j < size; ++j)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}

		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}