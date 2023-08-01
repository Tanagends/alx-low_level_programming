#include "lists.h"
/**
 * sum_listint - sums listint_t list.
 * @head: pointer to head.
 * Rturn: sum.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (!head)
		return (0);
	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
