#include "main.h"

/**
 * _isdigit - Entry point
 * @c: Input
 * Description:Check for digits 0 - 9
 * Return: Return 1 for digits and 0 for otherwise.
 */
int _isdigit(int c)
{
	int a;

	if (c >= 48 && c <= 57)
		a = 1;
	else
		a = 0;
	return (a);
}
