#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function to print array elements
 * @array: pointer to the array
 * @size: size of the array
 * @action: function to print single elements
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
       	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	else
		for (; i < size; i++)
			action(array[i]);
}
