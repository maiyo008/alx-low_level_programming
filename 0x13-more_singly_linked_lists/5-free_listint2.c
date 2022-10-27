#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function to free a list and set head to null
 * @head: header to the linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	head = NULL;
}
