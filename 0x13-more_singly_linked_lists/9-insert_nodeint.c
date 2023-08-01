#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node.
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index at which to insert the new node.
 * @n: The value to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *tmp;
unsigned int i;

if (head == NULL)
	return (NULL);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
	return (NULL);
new_node->n = n;
if (idx == 0)
{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
tmp = *head;
for (i = 0; i < idx - 1 && tmp != NULL; i++)
	tmp = tmp->next;

if (tmp == NULL)
{
	free(new_node);
	return (NULL);
}
new_node->next = tmp->next;
tmp->next = new_node;
return (new_node);
}
