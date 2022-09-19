#include "main.h"
#include <string.h>

/**
 * print_rev - Entry point
 * @s:A pointer input to a character
 * Description:Print a string in reverse
 * Return:Nothing
 */
void print_rev(char *s)
{
	int l;

	l = strlen(s);
	while (l >= 0)
	{
		_putchar(s[l]);
		--l;
	}
	_putchar('\n');
}

