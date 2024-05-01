#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include <stdbool.h>

/**
 * swap - swap the values of two pointers
 *
 * @x: first value to be swapped
 * @y: second value to be swapped
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - implements the bubble sort algorithim
 *
 * @array: pointer to the array to be sorted
 * @size: size of the array to be sorted
 */ 
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;

	for (i = 0; i < (size - 1); ++i)
	{
		swapped = false;

		for (j = 0; j < (size - 1 - i); ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = true;
			
			}
		}

		if (swapped == false)
			break;
	}
}


/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
