#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: the head node's data (i). Else 0 if list is empty
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *immediate;
	int input_data;

	if (*head == NULL)
		return (0);

	immediate = *head;
	input_data  = (*head)->n;
	*head = (*head)->next;

	free(immediate);

	return (input_data);
}
