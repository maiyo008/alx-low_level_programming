#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - a function that returns sum of all parameters
 * @n:first number
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	else
	{
		va_start(ap, n);
		sum = 0;
		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
		va_end(ap);
		return (sum);
	}
}
	
