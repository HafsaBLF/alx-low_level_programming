#include "lists.h"
/**
 *free_listint - free a list
 *@head: list
 */
void free_listint(listint_t *head)
{
listint_t *x;
while (head)
{
	x = head->next;
	free(head);
	head = x;
}
}
