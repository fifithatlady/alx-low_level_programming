#include "lists.h"
/**
 * find_listint_loop - finds the loop contained.
 * @head : pointer to  head of the linked list.
 * Return: pointer TO the node where the loop starts,
 *         NULL - if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *nodeA, *nodeB;

if (head == NULL || head->nextnode == NULL)
return (NULL);

nodeA = head->nextnode;
nodeB = (head->nextnode)->nextnode;

while (nodeB)
{
if (nodeA == nodeB)
{
nodeA = head;

while (nodeA != nodeB)
{
nodeA = nodeA->nextnode;
nodeB = nodeB->nextnode;
}

return (nodeA);
}

nodeA = nodeA->nextnode;
nodeB = (nodeB->nextnode)->nextnode;
}

return (NULL);
}
