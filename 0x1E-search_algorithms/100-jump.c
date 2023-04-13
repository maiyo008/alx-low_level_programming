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
 * if value is not present in array, or array is null return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t l = 0;

	if (array == NULL)
		return (-1);
	printf("Value checked for array[%d] = [%d]\n", (int)l, array[l]);
	while (array[min(step, size)] < value)
	{
		l = step;
		step += sqrt(size);
		if (l >= size)
			return (-1);
		printf("Value checked for array[%d] = [%d]\n", (int)l, array[l]);
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)l, (int)step);
	while (array[l] < value)
	{
		if (l == min(step, size))
			return (-1);
		printf("Value checked for array[%d] = [%d]\n", (int)l, array[l]);
		l++;
	}
	if (array[l] == value)
	{
		printf("Value checked for array[%d] = [%d]\n", (int)l, array[l]);
		return ((int)l);
	}
	return (-1);
}

/**
 * min - function to compare two elements
 * @a: first element
 * @b: second element
 * Return: minimum value element
 */
size_t min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}
