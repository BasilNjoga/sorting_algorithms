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
int i;
int j;
size_t p = sizeof(array) / sizeof(array[0]);
int temp;
printf("%d",p);
for(j = 0; j < p; j++) 
{
    for (i = 0; i < p; i++)
    {
    if(array[i+1] < array[i])
    {
        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
    }
    print_array(array, p);
    }
}
}

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}