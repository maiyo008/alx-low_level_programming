#include "main.h"

/**
 * print_line - Entry point
 * @n: Input integer
 * Description:Print a straight line n times
 * Return:Nothing
 */
void print_line(int n)
{
	int i;

	if (n == 0 && n < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
