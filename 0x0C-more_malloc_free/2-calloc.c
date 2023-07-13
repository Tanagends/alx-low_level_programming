#include <stdlib.h>
/**
 * _calloc - allocates memory.
 * @nmemb: element count.
 * @size: element size.
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int b = 0;
	unsigned int len;

	if (nmemb == 0 || size == 0)
		exit(0);
	len = size * nmemb;
	a = malloc(len);
	if (a == NULL)
		exit(0);
	for (b = 0; b < len; b++)
		a[b] = 0;
	return (a);
}
