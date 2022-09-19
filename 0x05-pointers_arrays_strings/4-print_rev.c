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
	int l = 0;

	while (s[l] != '\0')
		l++;
	while (l)
		_putchar(s[--l]);
	_putchar('\n');
}
