#include "lists.h"
/**
 * print_dlistint - prints elements of a doubly linked list
 * @h: head
 *
 * Return: element count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *head;

	if (!h)
		return (0);
	head = h;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
