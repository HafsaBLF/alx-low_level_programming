#include "lists.h"
/**
 *pop_listint - delete the head
 *@head: list
 *Return: 0 linked enpty
 */
int pop_listint(listint_t **head)
{
listint_t *x;
int y;

if (!head || !*head)
	return (0);
y = (*head)->n;
x = (*head)->next;
free(*head);
*head = x;
return (y);
}
