#include <stdlib.h>
#include <stdio.h>
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
	dlistint_t *copy, new;
	int i;

	if (!h)
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
	{
		dprintf(2, "Can't malloc");
		return (NULL);
	}
	new->n = n;
	new->next = copy;
	if (idx == 0)
		new->previous = NULL;
	else
		new->previous = copy->previous;
	copy->previous = new;
	copy = new;

	return (new);
}
