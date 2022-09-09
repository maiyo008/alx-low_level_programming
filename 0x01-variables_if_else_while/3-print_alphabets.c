#include <stdio.h>
/**
 * Main - Entry point
 * Print alphabets in lowercase then uppercase
 * printf is not allowed
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch_lowwer = 'a';
	char ch_upper = 'A';

	while (ch_lowwer <= 'z')
	{
		putchar(ch_lowwer);
		ch_lowwer++;
	}
	while (ch_upper <= 'Z')
	{
		putchar(ch_upper);
		ch_upper++;
	}
	putchar('\n');
	return (0);
}
