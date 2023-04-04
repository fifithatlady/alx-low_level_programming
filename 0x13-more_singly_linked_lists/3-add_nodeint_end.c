#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the head of the list
 * @n: integer to add to the list
 *
 * Return: address to the new node else NULL if error
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmpfile;
	/*end */

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
/* tmpfile -end */
	else
	{
		tmpfile = *head;
		while (tmpfile->next != NULL)
			tmpfile = tmpfile->next;
		tmpfile->next = new_node;
	}

	return (*head);
}
