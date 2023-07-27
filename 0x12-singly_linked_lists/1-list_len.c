#include "lists.h"
/**
 * list_len - counts elements of a list.
 * @h: initial node.
 * Return: node count.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
