#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function to add a new node at the beginning of
 * a list
 * @head: pointer to the start of a list
 * @str: string to be added
 * Return: address of the new element or null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int len = 0;

	temp = (list_t*)malloc(sizeof(list_t));
	if(temp == NULL)
		return (NULL);
	while (str[len])
		len++;
	temp->len = len;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
