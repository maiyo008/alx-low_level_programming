#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * Description: if something went wrong return null
 * @size: size of the hash table
 * Return: A pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arr;
	unsigned long int i;

	if (size <= 0)
		return (NULL);
	arr = (hash_table_t*)malloc(sizeof(hash_table_t));
	if (arr == NULL)
		return (NULL);
	arr->size = size;
	arr->array = (hash_node_t**)calloc(arr->size,sizeof(hash_node_t*));
	for(i=0; i < arr->size; i++)
		arr->array[i] = NULL;
	return (arr);
}
