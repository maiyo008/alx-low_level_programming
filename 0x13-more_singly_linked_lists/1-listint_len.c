#include <stdio.h>
#include "lists.h"

/**
 * listint_len - functions to count number of elements
 * @h: header pointing to the node structure
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
