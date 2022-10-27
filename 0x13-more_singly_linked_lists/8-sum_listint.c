#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function to return the sum of all the data in the list.
 * @head: head to the linked list
 * Return: sum of all data, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
