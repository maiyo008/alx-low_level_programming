# 0x1A. C - Hash Tables
----
## Objectives
----
* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables
---
## Resources
---
* [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
* [Hash function](https://en.wikipedia.org/wiki/Hash_function)
* [Hash table](https://en.wikipedia.org/wiki/Hash_table)
* [All about hash tables](https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus)
* [why hash tables and not arrays](https://stackoverflow.com/questions/31930046/what-is-a-hash-table-and-how-do-you-make-it-in-c)
---
## Tasks
---
### Task 0
---
* Write a function that creates a hash table:
	* Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
		Where `size` is the size of the array
	* Returns a pointer to the newly created hash table
	* If something went wrong, function should return **null**

### Task 1
* Write a hash function implementing the djb2 algorithm:
	* Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
	* You are allowed to copy paste  the function from [this page](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)

### Task 2
* Write a function that gives you the index of a key
	* Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
		Where `key` is the key
		and `size` is the size of  the array of the hash table
	* This function should use the `hash_djb2` function that you wrote earlier
	* Returns the index at which the key/value pair should be stored in the array
	* You will have  to use this hash functions  for all of the next tasks

