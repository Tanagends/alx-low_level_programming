#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes with c.
 * @size: array size.
 * @c: the char.
 * Return: pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * (sizeof(char)));
	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
