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
	const list_t *ptr = NULL;

	if (h == NULL)
		printf("This is an empty list\n");
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
