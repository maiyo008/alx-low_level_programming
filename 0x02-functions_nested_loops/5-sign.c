#include "main.h"

/**
 * print_sign - Entry point
 * @n: An input number
 * Description:This functions print sign of a number
 * Return: 1 if number is positive, 0 if number is 0, or -1 if number is negative
 */
int print_sign(int n)
{
	int returnVal;

	if (n > 0)
	{
		returnVal = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		returnVal = 0;
		_putchar('0');
	}
	else
	{
		returnVal = -1;
		_putchar('-');
	}
	return (returnVal);
}
