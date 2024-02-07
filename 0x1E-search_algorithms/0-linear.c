#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches linearly for an element
 * @array: pointer to the first element of the array to search in.
 * @size: array size
 * @value: value to be searched
 *
 * Return: The index of the value in the array.
 */
int linear_search(int *array, size_t size, int value)
{
	int *tmp = array;
	size_t i;

	if (!tmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, *tmp);

		if (*tmp == value)
			return (i);

		tmp++;
	}

	return (-1);
}
