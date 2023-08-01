#include "lists.h"
/**
 * pop_listint - frees listint_t list first node.
 * @head: pointer to head.
 * Return: head data.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (head == NULL || (*head) == NULL)
		return (0);
	ptr = *head;
	i = (*head)->n;

	*head = (*head)->next;
	free(ptr);
	return (i);
}
