/**
 * get_dnodeint_at_index - retrieves a node at an index.
 * @head: head pointer.
 * @index: position
 *
 * Return: node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *copy = head;
	int i;

	for (i = 0; i < index; i++)
	{
		if (copy)
			copy = copy->next;
		else
			return (NULL);
	}
	return (copy);
}
