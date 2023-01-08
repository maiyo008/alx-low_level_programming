#include "hash_tables.h"

/**
 * key_index - function to calculate the index of keys.
 * @key: the key value of the hash table nodes
 * @size: the size of the hash table
 * Return: index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int s = hash_djb2((unsigned char *)key);
	return (s % size);
}
