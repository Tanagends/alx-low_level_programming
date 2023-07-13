#include <stdlib.h>
#include <string.h> 
/**
 * _calloc - allocates memory.
 * @nmemb: element count.
 * @size: element size.
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0 || size == 0)
		exit(0);
	a = malloc(size * nmemb);
	if (a == NULL)
		exit(0);
	memset(a, 0, size * nmemb);
	return (a);
}
