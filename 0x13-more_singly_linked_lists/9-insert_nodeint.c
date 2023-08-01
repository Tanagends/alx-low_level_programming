#include "lists.h"
/**
 * get_nodeint_at_index - indexes listint_t list.
 * @head: pointer to head.
 * @index: index.
 * Return: the new node address.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	unsigned int i = 0;
	listint_t *newNode, p;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	ptr = head ? head : NULL;
	if (!ptr)
		return (NULL);
	for (i = 0; i < idx; i++)
	{
		if (ptr != NULL)
			ptr = ptr->next;
		else
			return (NULL);
	}
	p = ptr;
	ptr = newNode;
	newNode->next = p;

	return (newNode);
}
