#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: Singly linked list
 * @idx: index where the new node to be inserted
 * @n: integer number
 *
 * Return: address of new node
 * NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size;
	listint_t *node, *newNode;

	currentnode = *head;

	if (idx != 0)
	{
		for (size = 0; size < idx - 1 && currentnode != NULL; size++)
			currentnode =currentnode->next;
	}

	if (currentnode == NULL && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = currentnode->next;
		node->next = newNode;
	}

	return (newNode);
}
