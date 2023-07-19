#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searchesfor an integer.
 * @array: the array.
 * @size: array size.
 * @cmp: function which compares values.
 * @Return: index of first similar element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	while (!cmp(i) && i < size)
		i++;
	if (i == size)
		return (-1);
	return (i);
}
