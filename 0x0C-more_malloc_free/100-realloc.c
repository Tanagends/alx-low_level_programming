#include <stdlib.h>
/**
 * _realloc - allocates memory.
 * @old_size: old element count.
 * @new_size: new element count.
 * @ptr: old pointer.
 * Return: pointer to allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	char *old;
	char *new;
	unsigned int i;
	unsigned int b;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	new = a;
	if (ptr == NULL)
		return (a);
	old = ptr;
	b = old_size < new_size ? old_size : new_size;
	for (i = 0; i < b; i++)
		new[i] = old[i];
	free(ptr);
	return (a);
}
