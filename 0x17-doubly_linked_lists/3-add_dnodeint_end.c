#include "lists.h"
/**
 * add_dnodeint_end - appends node
 * @head: doubly linked list head
 * @n: value
 *
 * Return: addess of new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *copy;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (head == NULL)
	{
		head = &new;
		return (new);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	copy = *head;

	while (copy->next)
		copy = copy->next;
	copy->next = new;
	new->prev = copy;

	return (new);
}
