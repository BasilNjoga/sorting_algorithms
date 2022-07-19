#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - this is a function that perfoms a selection sort
 * 
 * @array: array to be sorted
 * @size: size of the array to be sorted
 * 
 * Return: Nothing 
 */

void selection_sort(int *array, size_t size)
{
    size_t j;
    size_t i;
    int tempvalue;
    int store;

    size = 10;
    for (i = 0; i < size; i++)
    {   tempvalue = array[i];
        for (j = i; j < size - 1; j++)
        {
            if (tempvalue > array[j+1])
                {
                    store = tempvalue;
                    tempvalue = array[j + 1];
                    array[j+1] = store;
                }
        }
        array[i] = tempvalue;
        print_array(array, size);
    }
}