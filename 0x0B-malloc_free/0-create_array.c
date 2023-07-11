#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes with c.
 * @size: array size.
 * @c: the char.
 * Return: pointer to the array.
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * (sizeof(unsigned int)));
	if (!array)
		return (NULL);
	array[0] = c;
	return (array);
}
