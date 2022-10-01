#include "main.h"

/**
 * _strcat - Entry point
 * @dest:A char input
 * @src:A char input
 * @n:An int input
 * Description:concantenate src to dest(strncat)
 * Return:A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	while (*dest)
		dest++;
	if (n > srclen)
		n = srclen;
	src = start;
	for (; i < n; i++)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
