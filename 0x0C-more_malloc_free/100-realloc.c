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
	if (ptr == NULL)
		return (a);
	old = ptr;
	old_size < new_size ? b == old_size : b == new_size;
	for (i = 0; i < b; i++)
		a[i] = old[i];
	free(ptr);
	return (a);
}
