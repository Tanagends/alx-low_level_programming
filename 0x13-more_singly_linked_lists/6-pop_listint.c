#include "lists.h"
/**
 * pop_listint - frees listint_t list first node.
 * @head: pointer to head.
 * Return: head data.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int i = *head->n;

	*head = *head->next;
	free(ptr);
	return (i);
}
