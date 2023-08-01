#include "lists.h"
/**
 * free_listint2 - frees listint_t list.
 * @head: pointer to head.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *headPtr;

	headPtr = *head;
	while (headPtr)
	{
		ptr = headPtr;
		headPtr = headPtr->next;
		free(ptr);
	}
}
