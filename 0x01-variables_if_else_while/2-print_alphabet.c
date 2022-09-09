#include <stdio.h>
/**
 * main - Entry point
 * Print all aphabet in lowercase
 * Printf not allowed
 * Return: Always 0 (success):
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
