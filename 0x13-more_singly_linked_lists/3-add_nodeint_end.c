#include "lists.h"
/**
 * add_nodeint_end - adds listint_t node to list end.
 * @head: pointer to head.
 * @n: int data at node.
 *
 * Return: address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *ptr = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = newNode;
	}
	return (newNode);
}
