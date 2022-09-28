#include "main.h"

/**
 * factorial - return factorial of a number
 * @n: an input number
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
