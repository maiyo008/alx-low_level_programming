#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers,
 * using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where the value is located, otherwise,
 * if value is not present in array or array is null, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t i = 0;
	size_t m = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array:");
		for (i = l; i <= r; i++)
		{
			if (i < r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return ((int)m);
	}
	return (-1);
}
