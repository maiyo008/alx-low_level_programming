#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: An integer input
 * Description:This function prints the last digit of a number
 * Return:last digit of number r
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		a = -1 * (n % 10);
	else
		a = n % 10;
	_putchar((a % 10) + '0');
	return (a % 10);
}
