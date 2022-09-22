#include "main.h"

/**
 * _strncpy - Entry point
 * @dest:A char input
 * @src:A char input
 * @n:An int input
 * Description:function to copy a string
 * Return:a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	srclen++;
	if (n > srclen)
		n = srclen;
	src = start;
	for (; i < n; i++)
		*dest++ = *src++;
	return (temp);
}
