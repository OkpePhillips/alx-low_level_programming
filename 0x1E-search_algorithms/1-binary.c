#include "search_algos.h"
#include <stdio.h>

/**
 *binary_search - binary function to find the index of a value
 *@array: array to be searched
 *@size: the number of elements in the array
 *@value: the element to be searched for
 *
 *Return: index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int low, mid, high, i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			low = mid + 1;
		} else
		{
			high = mid - 1;
		}
	}
	return (-1);
}


