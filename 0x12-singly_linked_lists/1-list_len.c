#include <stdio.h>
#include "lists.h"

/**
 * list_len - function to count the number of elements
 * in a list
 * @h: node struct
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	
	return (nodes);
}
