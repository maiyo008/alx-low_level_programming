#include "main.h"

/**
 * _abs - Entry point
 * @n: An input number
 * Description:Return the absolute value of an integer
 * Return:Return value of n 
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
