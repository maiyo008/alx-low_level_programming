#include <stdio.h>
#include "lists.h"
#include "string.h"

/**
 * print_list - function to print the lists
 * @h: node structure input
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		printf("This is an empty list\n");
	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		count++;
	}
	return (count);
}
