#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function to print a name through a call back
 * @name: name of the person
 * @f: pointer to function to print the name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
