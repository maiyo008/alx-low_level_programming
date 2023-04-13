#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array,
 * of integers using exponential search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: first index where value is located, otherwise,
 * if array is null or value is not in array return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = 1;
	size_t mid, i;
	size_t sub_start, sub_end;

	if (array == NULL || size == 0)
		return (-1);
	while ((end < size) && (array[end] < value))
	{
		start = end;
		end *= 2;
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	}
	sub_start = start;
	if (end < size)
		sub_end = end;
	else
		sub_end = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", sub_start, sub_end);
	while (sub_start <= sub_end)
	{
		printf("Searching in array: ");
		for (i = sub_start; i <= sub_end; i++)
		{
			if (i < sub_end)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = sub_start + (sub_end - sub_start) / 2;
		if (array[mid] < value)
			sub_start = mid + 1;
		else if (array[mid] > value)
			sub_end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
