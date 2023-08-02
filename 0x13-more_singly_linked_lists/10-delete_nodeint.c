#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index.
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: The index at which to insert the new node.
 *
 * Return: 1 (Success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev = NULL, *tmp;
unsigned int i;

if (head == NULL || *head == NULL)
	return (-1);
tmp = *head;
for (i = 0; i < index && tmp != NULL; i++)
{
	prev = tmp;
	tmp = tmp->next;
}
if (tmp == NULL)
	return (-1);
if (prev == NULL)
	*head = tmp->next;
else
	prev->next = tmp->next;
free(tmp);
return (1);
}
