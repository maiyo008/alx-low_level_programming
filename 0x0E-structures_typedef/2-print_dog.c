#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function to print struct dog
 * @d: struct input
 * Return:nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
		if (d -> name == NULL)
			printf("Name:(nill)\n");
		else
			printf("Name: %s\n", d -> name);
		if (d -> age == 0.0)
			printf("Age:(nill)\n");
		else
			printf("Age: %f\n", d -> age);
		if (d -> owner == NULL)
			printf("Owner: (nill)\n");
		else
			printf("Owner: %s\n", d -> owner);
	}
}
