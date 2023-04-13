#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - search for a value in a sorted array of integers
 * using the interpolation search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where the array is located, otherwise,
 *  if array is null or value not in array, return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);
	while ((array[high] != array[low]) && (value >= array[low]))
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) *
			(value - array[low]));
		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] < value)
		{
			low = pos + 1;
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		}
		else if (value < array[pos])
		{
			high = pos - 1;
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			return (pos);
		}
	}
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	else
		return (-1);
}
