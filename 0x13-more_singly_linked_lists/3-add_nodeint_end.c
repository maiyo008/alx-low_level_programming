#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of the list
 * @head: head to the list
 * @n:data member for the nodes
 * Return: address of the new element, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newNode;
	
	newNode = (listint_t*)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (*head == NULL)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}
