#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to pop off the head 
 * @head: head to the linked list
 * Return: returns head node's data(n), 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *newNode;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	newNode = (*head)->next;
	free(*head);
	*head = newNode;
	return (n);
}
