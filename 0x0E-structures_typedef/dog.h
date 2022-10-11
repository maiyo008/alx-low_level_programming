/**
 * struct dog - A new structure with the following types
 * @name: First member of type char
 * @age: Second member of type float
 * @owner: Third member of type char
 * Description: The structure has three data members
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

