#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

/**
 * struct hash_node_s - Node of a hash table
 *
 * @Key: The key, string
 * The key is unique in the  hash table
 * @value: The value of the corresponding to a key
 * @next: A pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
}hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell  of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int  size;
	hash_node_t **array;
}hash_table_t


 #endif
