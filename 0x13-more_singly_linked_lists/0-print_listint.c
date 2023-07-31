#include "lists.h"
/**
 * print_listint - prints listint_t list.
 * @h: pointer to head.
 *
 * Return: element count.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
