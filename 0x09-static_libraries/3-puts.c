#include "main.h"

/**
 * _puts - Entry point
 * @str:A pointer to char input
 * Description:Prints a string
 * Return:Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
