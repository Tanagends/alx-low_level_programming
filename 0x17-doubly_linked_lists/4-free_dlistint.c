#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - frees doubly linked list.
 * @head: list head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (!head)
		return;
	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
