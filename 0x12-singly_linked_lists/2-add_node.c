#include "lists.h"
#include <string.h>
/**
 * list_len - counts elements of a list.
 * @h: initial node.
 * Return: node count.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr, *p;
	size_t i = 0;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	while (str[i++] != '\0')
		;
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = i - 1;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
