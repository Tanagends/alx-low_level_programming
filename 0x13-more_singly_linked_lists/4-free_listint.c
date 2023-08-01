#include "lists.h"
/**
 * free_listint - frees listint_t list.
 * @head: pointer to head.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;
	
	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
