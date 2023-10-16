#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node
 * @head: pointer to head pointer.
 * @index: position
 *
 * Return: 1 (if success otherwise -1)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index && current; i++)
	{
	/* Traverse to the desired index or the end of the list */
		current = current->next;
	}

	if (!current)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;

	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
