#include "main.h"

/**
 * _memset - Entry point.
 * @s:Char input pointing to the start of buffer.
 * @b:Const char input
 * @n:input of memory size
 * Description:Fill n bytes of memory with const b to memory 
 * pointed by s
 * Return:Pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *r = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (r);
}
