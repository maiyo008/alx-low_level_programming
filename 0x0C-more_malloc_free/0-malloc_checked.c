#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 * @b: an input to declare size of memory
 * Return: exit(98) if malloc fails otherwise return pointer to address
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
