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
	dlistint_t *copy, *tmp;
	int i;

	if (!head)
		return (-1);
	copy = *head;
	for (i = 0; i < index; i++)
	{
		if (copy)
			copy = copy->next;
		else
			return (-1);
	}
	tmp = copy;
	copy = copy->next;
	copy->previous = tmp->previous;
	free(tmp);
	return (1);
}
