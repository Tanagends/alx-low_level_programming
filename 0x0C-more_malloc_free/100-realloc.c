#include <stdlib.h>
/**
 * _calloc - allocates memory.
 * @nmemb: element count.
 * @size: element size.
 * Return: pointer to allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;

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
	_memcpy(a, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);
	return (a);
}
/**
 * _memcpy - copies memory area.
 *@src: source memory.
 *@dest: destination memory.
 *@n: number of bytes to be copied.
 *Return: pointer to memory dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
