#include "main.h"
#include <stdio.h>

/**
 * _strstr - funtion to locates a substring.
 * @haystack: a string input
 * @needle: a substring input
 * Return: a pointer to the beginning of located substring
 * or NULL if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
