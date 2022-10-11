#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - function to create a new structure
 * @name:dog's name
 * @age:dog's age
 * @owner:dog's owner
 * Return:pointer to the struct 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copy_name, *copy_owner;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	copy_name = malloc(len_name + 1);
	if (copy_name == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		copy_name[i] = name[i];
	copy_name = '\0';
	copy_owner = malloc(len_owner + 1);
	if (copy_owner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		copy_owner[i] = owner[i];
	copy_owner = '\0';
	new_dog->name = copy_name;
	new_dog->age = age;
	new_dog->owner = copy_owner;
	return (new_dog);
}


