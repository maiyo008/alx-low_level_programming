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
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
