#include "lists.h"
/**
 * insert_nodeint_at_index - index insertion on listint_t list.
 * @head: pointer to pointer to head.
 * @idx: index.
 * @n: new node int.
 * Return: the new node address.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	unsigned int i = 0;
	listint_t *newNode, *p;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	ptr = (*head) ? (*head) : NULL;
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
