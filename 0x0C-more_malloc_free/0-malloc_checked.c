#include <stdlib.h>
/*
 * malloc_checked - allocates memory.
 * @b: size.
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
