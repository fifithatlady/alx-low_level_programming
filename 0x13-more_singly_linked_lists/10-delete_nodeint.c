#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at given index
 *                           of a listint_t linked list.
 * @head: double pointer to the first head node in the list
 * @index: index of the node to delete
 *
 * Return: (1) if success ELSE (-1) if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *count = *head;
	unsigned int node;

	if (count == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(count);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (count->next == NULL)
			return (-1);

		count = count->next;
	}

	tmp = count->next;
	count->next = tmp->next;
	free(tmp);
	return (1);
}
