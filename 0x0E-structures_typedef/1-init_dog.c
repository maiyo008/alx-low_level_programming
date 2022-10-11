#include "dog.h"

/**
 * init_dog - function to initialize variables of struct dog
 * @d:struct object input
 * @name:struct member 1 variable input
 * @age:struct member 2 variable input
 * @owner:struct member 3 variable input
 * Return:nothing
 */
void init_dog(struct dog *d, char *name,float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
