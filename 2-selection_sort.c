#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - this is a function that perfoms a selection sort
 *
 * @array: array to be sorted
 * @size: size of the array to be sorted
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t j;
	size_t i;
	int tempvalue;
	int movingnumber;
	int movingnumberindex;

	for (i = 0; i < size - 1; i++)
	{
		tempvalue = array[i];
		movingnumber = array[i];
		for (j = i; j < size - 1; j++)
		{
			if (tempvalue > array[j + 1])
			{
				tempvalue = array[j + 1];
				movingnumberindex = j + 1;
			}
		}
		array[i] = tempvalue;
		array[movingnumberindex] = movingnumber;
		print_array(array, size);
	}
}
