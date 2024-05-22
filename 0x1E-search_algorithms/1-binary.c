#include "search_algos.h"

/**
 * print_array - To print the array elements.
 * @array: array The array to print.
 * @size: size The size of the array.
 * return -1 or array
*/

void print_array(int *array, size_t size)
{
	for (size_t n = 0; n < size; n++)
	{
		printf("%d", array[n]);
		if (n < size - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}

/**
 * binary_search - To perform binary search on an array.
 * @array: array The array to search.
 * @size: size The size of the array.
 * @value: value The value to search for.
 * @return -1 or mid
 */

int binary_search(int *array, size_t size, int value)
{
	int high = size - 1;
	int low = 0;

	print_array(array, size);

	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		if (array[mid] == value)
			(return mid;)
		if (array[mid] < value)
			low = mid + 1;
		else
		{
			high = mid - 1;
		}
	}
	(return -1;)
}
