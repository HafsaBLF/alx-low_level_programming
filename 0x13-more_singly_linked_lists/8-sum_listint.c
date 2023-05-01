#include "lists.h"
/**
 *sum_listint - return the sum
 *@head: list
 *Return: 0 if list empty
 */
int sum_listint(listint_t *head)
{
listint_t *x = head;
unsigned int i;
i = 0;
while (x)
{
	i += x->n;
	x = x->next;
}
return (i);
}
