#include "lists.h"
/**
 * listint_len - count listint_t list.
 * @h: pointer to head.
 *
 * Return: element count.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
