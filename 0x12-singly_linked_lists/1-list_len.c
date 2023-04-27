#include "lists.h"
/**
 *list_len - Nbr of elements
 *@h: list
 *Return: Nbr of elements
 */
size_t list_len(const list_t *h)
{
size_t x = 0;
	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
