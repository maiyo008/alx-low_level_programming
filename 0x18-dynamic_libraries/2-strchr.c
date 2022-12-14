#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locate a character in a string]
 * @s: an input string
 * @c: an input char to be searched
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
