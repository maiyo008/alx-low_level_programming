#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function to add a node to the end of a list
 * @head: pointer to the the head struct
 * @str: string to add as a node
 * Return: pointer to the new element of list, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	int len = 0;

	newNode = (list_t*)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	while (str[len])
		len++;
	newNode->len = len;
	newNode->str = strdup(str);
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
