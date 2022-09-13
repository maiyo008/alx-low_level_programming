#include "main.h"

/**
 * _islower - Entry to the function
 * @c: An input ASCII value or character
 * Description: function uses _putchar function to print 
 * Return: 1 if it is lowercase 0 if it is otherwise
 */
int _islower(int c)
{
	int a;

	if ((c >= 97) && (c <= 122))
		a = 1;
	else
		a = 0;
	return (a);
}
