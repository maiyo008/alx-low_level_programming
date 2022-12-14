#include "main.h"

/**
 * _islower - Entry point
 * @c: An integer input
 * Description:check for lowercase character
 * Return:Return 1 if lowercase and 0 if otherwise
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
