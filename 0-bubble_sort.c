#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - this is a function to sort out an array of integers
 * using bubble sort
 *
 * @array: array of integers passed
 * @size: size of integers requred
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
size_t i;
size_t j;
int temp;

for (j = 0; j < size; j++)
{
	for (i = 0; i < size - 1; i++)
	{
		if (array[i + 1] < array[i])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			print_array(array, size);
		}
	}
}
}
