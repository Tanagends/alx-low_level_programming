#include <stdlib.h>
/**
 * _memset - sets memory.
 * @c: char to be set.
 * @p: string to be set.
 * @len: setting length.
 * Return: set string.
 */
char *_memset(char *p, char c, unsigned int len)
{
	unsigned int i = 0;

	for (i = 0; i < len; i++)
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
	unsigned int len;

	if (nmemb == 0 || size == 0)
		exit(0);
	len = size * nmemb;
	a = malloc(len);
	if (a == NULL)
		exit(0);
	_memset(a, 0, len);
	return (a);
}
