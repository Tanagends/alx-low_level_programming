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
	unsigned int i = 0;
	listint_t *newNode, *ptr, *prev = NULL;

	if (*head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	ptr = (*head);
	for (i = 0; i < idx; i++)
	{
		if (ptr != NULL)
		{
			prev = ptr;
			ptr = ptr->next;
		}
		else
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = ptr;
	prev->next = newNode;
	return (newNode);
}
