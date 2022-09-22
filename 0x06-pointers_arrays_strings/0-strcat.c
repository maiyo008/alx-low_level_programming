#include "main.h"

/**
 * _strcat - Entry point
 * @dest:A char input
 * @src:A char input
 * Description:Append scr to dest and add null char
 * Return:A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
