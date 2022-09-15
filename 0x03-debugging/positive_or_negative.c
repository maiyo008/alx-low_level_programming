#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - Entry point
 * Description:Check wether the function is positive or negative
 * Return: Nothing
 */
void positive_or_negative(int i)
{
	int n = i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
