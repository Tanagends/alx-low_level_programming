/**
 * sum_dlistint - sums up a doubly linked integer list.
 * @head: the lits's head.
 *
 * Return: the sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *copy = head;

	while (copy)
	{
		sum += copy->n;
		copy = copy->next;
	}

	return (sum);
}
