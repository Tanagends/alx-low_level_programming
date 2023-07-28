#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds node to a list.
 * @head: initial node pointer pointer.
 * @str: string data.
 * Return: added node pointer.
 */
list_t *add_node_end(list_t **head, const char *str)
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
	ptr->next = NULL;
	p = *head;
	while (p != NULL)
		p = p->next;
	p = ptr;
	return (ptr);
}
