#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint - prepends node
 * @head: doubly linked list head
 * @n: value
 *
 * Return: addess of new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		dprintf(STDERR_FILENO, "Could not malloc");
		return (NULL);
	}
	new->n = n;
	new->previous = NULL;
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

	new->next = *head;
	(*head)->previous = new;
	return (new);
}
