#include "lists.h"

/**
 * free_listp - free  linked list.
 * @head: start of linked list
 *
 * Return:  return n/l
 */
void free_listp(listp_t **head)
{
	listp_t *temperary;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temperary = current) != NULL)
		{
			current = current->next;
			free(temperary);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - print linked list.
 * @head: start/head of a list.
 *
 * Return: num of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *hptrr, *newnode, *add;

	hptrr = NULL;
	while (head != NULL)
	{
		newnode = malloc(sizeof(listp_t));

		if (newnode == NULL)
			exit(98);

		newnode->pointer = (void *)head;
		newnode->next = hptrr;
		hptrr = newnode;

		add = hptrr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->pointer)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptrr);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->node);
		head = head->next;
		nodes++;
	}

	free_listp(&hptrr);
	return (nodes);
}
