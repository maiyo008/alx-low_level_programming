#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search a string for any set of bytes
 * @s: input string
 * @accept: input string
 * Return: a pointer to byte in matching any byte from string
 */
char *_strpbrk(char *s, char *accept)
{
	char *r = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = r;
		s++;
	}
	return (NULL);
}
