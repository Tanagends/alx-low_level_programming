#include "lists.h"
/**
 * free_listint2 - frees listint_t list.
 * @head: pointer to head.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *headPtr;

	if (*head == NULL || head == NULL)
		return;
	headPtr = *head;
	while (headPtr)
	{
		ptr = headPtr;
		headPtr = headPtr->next;
		free(ptr);
	}
	*head = NULL;
}
