#include <stdlib.h>
/**
 * _memset - sets memory.
 * @c: char to be set.
 * @p: string to be set.
 * @l: setting length.
 * Return: set string.
 */
char *_memset(char *p, char c, unsigned int l)
{
	unsigned int i = 0;

	for (i = 0; i < l; i++)
		p[i] = c;
	return (p);
}
/**
 * _calloc - allocates memory.
 * @nmemb: element count.
 * @size: element size.
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	_memset(a, 0, size * nmemb);
	return (a);
}
