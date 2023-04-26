#include "lists.h"

/**
 * free_listp2 - free linked list
 * @head: begining/head of a list.
 *
 * Return: nothing to return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temperary;
	listp_t *curent;

	if (head != NULL)
	{
		curent = *head;
		while ((temperary = curent) != NULL)
		{
			curr = curent->next;
			free(temperary);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - free linked list.
 * @h:start head of a list.
 *
 * Return: size of freed lists.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptrr, *newnode, *add;
	listint_t *curent;

	hptrr = NULL;
	while (*h != NULL)
	{
		newnode = malloc(sizeof(listp_t));

		if (newnode == NULL)
			exit(98);

		newnode->pointer = (void *)*h;
		newnode->next = hptrr;
		hptrr = newnode;

		add = hptrr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->pointer)
			{
				*h = NULL;
				free_listp2(&hptrr);
				return (numnodes);
			}
		}

		curent = *h;
		*h = (*h)->next;
		free(curr);
		numnodes++;
	}

	*h = NULL;
	free_listp2(&hptrr);
	return (numnodes);
}
