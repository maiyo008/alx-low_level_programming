#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function to create a new node at the beggining of a list
 * @head: head to the list
 * @n: data member of the node struct
 * Return: address of the new element, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t*)malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
