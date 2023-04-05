#include "lists.h"

/**
 * free_listint2 - free list & set list head to NULL
 * @head: Singly linked list
 *
 * Return: No return
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *immedeate_v;

	if (head != NULL)
	{
	       	immedeate_v = *head;
	while ((tmp  = immedeate_v) != NULL)
	{
		immedeate_v = immedeate_v->next
			free(tmp);
	}
	*head = NULL;
	}
}
