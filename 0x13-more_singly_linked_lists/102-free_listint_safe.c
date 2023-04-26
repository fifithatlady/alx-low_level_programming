#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _ra - reallocates memory 
 * @list: to append
 * @size: size of  new list 
 * @new: new node  ading to the list
 *
 * Return: pointer to  new
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *newnode)
{
	listint_t **newlist;
	size_t num;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (num = 0; num < size - 1; num++)
		newlist[num] = list[num];
	newlist[num] = newnode;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - free linked list in a more safe way
 * @head: double pointer to head address of the list
 *
 * Return:  num of nodes  the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t num, nnum = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (nnum);
	while (*head != NULL)
	{
		for (num = 0; num < nnum; num++)
		{
			if (*head == list[num])
			{
				*head = NULL;
				free(list);
				return (nnum);
			}
		}
		nnum++;
		list = _ra(list, nnum, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (nnum);
}
