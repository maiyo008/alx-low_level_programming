#include "main.h"

/**
 * _isupper - Entry point
 * @c: Input
 * Description:Check for uppercase characters
 * Return: Return 1 if uppercase or 0 for otherwise
 */
int _isupper(int c)
{
	int a;

	if (c >= 65 && c <= 90)
		a = 1;
	else
		a = 0;

	return (a);
}
