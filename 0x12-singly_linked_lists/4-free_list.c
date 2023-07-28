#include "lists.h"
#include <string.h>
/**
 * add_node - adds node to a list.
 * @head: initial node pointer pointer.
 * @str: string data.
 * Return: added node pointer.
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
