#include "main.h"

/**
 * main - Entry point
 * Call function to print the alphabets in lower case
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
