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
	dlistint_t *copy, *tmp, *before = NULL, *bef;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	copy = *head;
	if (index == 0)
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
	{
		if (before)
			before->next = NULL;
	}
	else
	{
		copy->next->prev = before;
		copy = copy->next;
	}
	if (index == 0)
	{
		*head = before;
		if (before)
			before->prev = NULL;
	}
	free(tmp);
	return (1);
}
