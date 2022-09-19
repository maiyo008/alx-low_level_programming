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
	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	return (temp);
}
