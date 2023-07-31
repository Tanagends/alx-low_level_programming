#include "lists.h"
/**
 * add_nodeint - adds listint_t node at list start.
 * @h: pointer to head.
 * @n: int data at node.
 *
 * Return: address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
