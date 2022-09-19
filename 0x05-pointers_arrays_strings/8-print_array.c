#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a:Input array
 * @n:Input size of array
 * Description:print an array of size n
 * Return:Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
}
