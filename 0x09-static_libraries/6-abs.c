#include "main.h"

/**
 * _abs - Entry point
 * @n: An integer
 * Description: This function returns an absolute value of a number
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
