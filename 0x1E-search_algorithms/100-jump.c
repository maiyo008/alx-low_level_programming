#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - search for a value in a sorted array
 * using jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where the value is stored, otherwise,
 * if value is not present in array or array is null return (-1)
 */
int jump_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = 0;
	size_t step = sqrt(size);

	if (array == NULL)
		return (-1);
	while (r < size && array[r] < value)
	{
		l = r;
		r += step;
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", l, r);
	while (l <= r)
	{
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
		if (r > size)
			break;
		l++;
	}
	return (-1);
}
