#include "lists.h"
/**
 *listint_len - return the nbr of elements
 *@h: list
 *Return: Nbr of elements
 */
size_t listint_len(const listint_t *h)
{
size_t node = 0;
while (h)
{
	node++;
	h = h->next;
}
return (node);
}
