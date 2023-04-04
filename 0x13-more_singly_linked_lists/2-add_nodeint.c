#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a double pointer to the beginning of a listint_t list
 * @n: integer to add in the new node
 *
 * Return: address of new node or
 *         NULL if error
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_i_node;

	if (head == NULL)
		return (NULL);

	new_i_node = malloc(sizeof(listint_t));
	if (new_i_node == NULL)
		return (NULL);

	new_i_node->n = n;
	new_i_node->next = *head;
	*head = new_i_node;

	return (new_i_node);
}
