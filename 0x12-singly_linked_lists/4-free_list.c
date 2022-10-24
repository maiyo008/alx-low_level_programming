#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function to free a linked list
 * @head: pointer to the head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
