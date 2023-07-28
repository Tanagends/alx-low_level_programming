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
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}
}
