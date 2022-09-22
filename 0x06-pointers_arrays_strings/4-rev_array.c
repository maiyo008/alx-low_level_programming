#include "main.h"

/**
 * reverse_array - Entry point
 * @a:array input
 * @n:Number of array elements
 * Description:Reverse an array
 * Return:nothing
 */
void reverse_array(int *a, int n)
{
	int temp, i = 0;

	for (; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
