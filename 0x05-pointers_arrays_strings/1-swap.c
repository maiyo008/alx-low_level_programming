#include "main.h"

/**
 * swap_int - Entry point
 * @a:A pointer int input
 * @b:A pointer int input
 * Description:Swap values of two integers
 * Return:Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
