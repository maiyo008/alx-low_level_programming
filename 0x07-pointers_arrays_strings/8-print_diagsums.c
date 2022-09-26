#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal square matrixes
 * @a:array input
 * @size: int input
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int max = size * size;
	int firstsum = 0;
	int secondsum = 0;

	for (; i < max; i += size + 1)
		firstsum += a[i];
	for (i = size - 1; i < max - 1; i += size - 1)
		secondsum += a[i];
	printf("%d, %d\n", firstsum, secondsum);
}

