#include "main.h"

/**
 * _strcpy - Entry point
 * @dest:Array input
 * @src:Array input
 * Description:Copy string from src to dest
 * Return:pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[len] != '\0')
		len++;
	for (; i < len; i++)
		dest[i] = src[i];
	return (dest);
}
