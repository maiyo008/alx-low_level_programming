#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination char input
 * @src: source char input
 * @n: memory size input
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *r = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (r);
}
