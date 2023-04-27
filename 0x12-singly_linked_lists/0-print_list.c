#include "lists.h"
/**
 *print_list - print all elements of the list
 *@h: list
 *Return: Nbr of nodes
 */
size_t print_list(const list_t *h)
{
size_t x;
x = 0;
	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		x++;
	}
	return (x);
}
