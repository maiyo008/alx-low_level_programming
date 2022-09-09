#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Random number generated everytime the code is run
 * 
 * Check if a number is even, odd or zero if neither
**/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
