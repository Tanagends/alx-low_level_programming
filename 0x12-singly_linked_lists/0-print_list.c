#include "lists.h"
/**
 * print_list - prints elements of a list.
 * @h: initial node.
 * Return: node count.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (++i);
}
