#include "search_algos.h"

#include <stdlib.h>
#include <stdio.h>

/**
 *linear_search - Function to obtain the index of a value from array
 *@array: the array to be searched
 *@size: the number of elements in the array
 *@value: the value to be searched in the array
 *
 * Return: Index of the first value, or -1 if failed
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
