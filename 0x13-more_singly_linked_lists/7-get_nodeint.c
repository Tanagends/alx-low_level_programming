#include "lists.h"
/**
 * get_nodeint_at_index - indexes listint_t list.
 * @head: pointer to head.
 * @index: index.
 * Return: the node index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	ptr = head ? head : NULL;
	if (!ptr)
		return (NULL);
	for (i = 0; i < index + 1; i++)
		ptr = (ptr != NULL) ? ptr->next : NULL;
	return (ptr);
}
