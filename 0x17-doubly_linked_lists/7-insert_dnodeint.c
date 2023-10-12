#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node into a doubly linked list.
 * @h: pointer to head pointer.
 * @idx: the index.
 * @n: the value
 *
 * Return: new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy, *new;
	unsigned int i;

	if (!h || ((*h) == NULL && idx != 0))
		return (NULL);

	copy = *h;
	for (i = 0; i < idx; i++)
	{
		if (!copy)
			return (NULL);
		copy = copy->next;
	}

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = copy;
	new->prev = idx == 0 ? NULL : copy->prev;
	if (new->prev)
		copy->previous->next = new;
	else
		*h = new;
	if (copy)
		copy->prev = new;
	return (new);
}
