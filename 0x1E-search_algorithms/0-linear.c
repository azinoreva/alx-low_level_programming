#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 *                 of integers using linear search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	for (size_t n = 0; n < size; n++)
	{
		if (array[n] == value)
		{
			(return n;)
		}
	}
	(return -1;)
}
