#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function to create an array of char
 * and initialize it with a specific char
 * @size: size input of char
 * @c: char input
 * Return: null if zero, or fails. Otherwise return a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
