#include "lists.h"

/**
 * reverse_listint - reverses a linked list in a code.
 * @head: head of a list where the list begins.
 *
 * Return: pointer to  first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pointer;
	listint_t *node;

	(pointer = NULL, node = NULL);


	while (*head != NULL)
	{
		node = (*head)->next;
		(*head)->next = pointer;
		pointer = *head;
		*head = node;
	}

	*head = pointer;
	return (*head);
}
