#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using Linear search algorithm
 * @array: pointer to the first element in an array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where the value is located, otherwise,
 * if value not present or if array is NULL return -1
*/

int linear_search(int *array, size_t size, int value)
{
	int index = -1;
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, array[i]);
		if (value == array[i])
		{
			index = (int) i;
			break;
		}
	}
	if (index == -1)
		return (-1);
	return (index);
}
