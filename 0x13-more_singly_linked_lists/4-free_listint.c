#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function to free the list
 * @head: head to the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
