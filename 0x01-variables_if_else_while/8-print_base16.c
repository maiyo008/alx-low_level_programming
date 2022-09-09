#include <stdio.h>
/**
 * main - Entry point
 * Print all the hexadecimal numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	char ch = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

