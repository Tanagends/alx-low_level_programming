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
	dlistint_t *copy, *tmp, *before = NULL;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	copy = *head;
	for (i = 0; i < index; i++)
	{
		if (copy)
		{
			before = copy;
			copy = copy->next;
		}
		else
			return (-1);
	}
	if (!copy)
		return (-1);
	tmp = copy;
	if (!(copy->next))
		before->next = NULL;
	else
	{
		copy = copy->next;
		copy->prev = before;
	}
	if (index == 0)
		*head = copy;
	free(tmp);
	return (1);
}
