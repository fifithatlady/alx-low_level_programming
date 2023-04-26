#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory to pointer array
 * @list: to append
 * @size: size of the new list 
 * @new: new node  adding to  list
 *
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *newnode)
{
	const listint_t **newlist;
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
 * print_listint_safe - prints linked list.
 * @head: *head lists
 *
 * Return: num(nodes)
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num, nnum = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (num = 0; num < nnum; num++)
		{
			if (head == list[num])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (nnum);
			}
		}
		nnum++;
		list = _r(list, nnum, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (nnum);
}
