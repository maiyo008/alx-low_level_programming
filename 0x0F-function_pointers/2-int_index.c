#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function to search for an integer
 * @array:pointer to the array
 * @size:size of the array
 * @cmp:function to compare
 * Return:nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (4);
	if (size <= 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	if (i == size)
		return (-1);
	return(-1);
}

