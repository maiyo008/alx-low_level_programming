#include <stdio.h>
/**
 * main - Entry point
 * Print all aphabet in lowercase
 * Printf not allowed
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
