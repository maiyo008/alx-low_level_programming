#include "main.h"

/**
 * _islower - Entry to the function
 * check for lower or upper cases
 * Return: 0(Success)
 */
int _islower(int c)
{
	int a;

       	if ((c >= 97) && (c <= 122))
		a = 1;
	else
		a = 0;
	return a;
}
