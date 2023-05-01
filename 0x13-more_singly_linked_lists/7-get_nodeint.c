#include "lists.h"
/**
 **get_nodeint_at_index - return a node
 *@head: list
 *@index: unsigned int
 *Return: NULL if no node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *x = head;
unsigned int i;
i = 0;
	while (x && i < index)
	{
		x = x->next;
		i++;
	}
	return (x ? x : NULL);
}
