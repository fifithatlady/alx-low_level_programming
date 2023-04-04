#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to the beginning of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp_file;

	while (head != NULL)
	{
		temp_file = head->next;
	/*	free(head); *
	 * ((tmp_file = head) != NULL)	 *
	 */
		head = temp_file;
		 free(head);
	}
}
