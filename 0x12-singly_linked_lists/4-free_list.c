#include "lists.h"
#include <string.h>
/**
 * free_list - frees a list.
 * @head: initial node pointer pointer.
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
