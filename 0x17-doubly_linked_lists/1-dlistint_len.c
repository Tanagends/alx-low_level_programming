#include "lists.h"
/**
 * dlistint_len - counts elements of a doubly linked list
 * @h: head
 *
 * Return: element count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0, i;
	dlistint_t *head;

	if (!h)
		return (0);
	head = h;
	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}
