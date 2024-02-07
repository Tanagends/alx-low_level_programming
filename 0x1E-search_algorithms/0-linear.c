#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array (assumed to be an array of integers)
 * @size: size of the array (number of elements)
 * @value: value to search for
 * Return: index of the first occurrence of the value in the array,
 *         -1 if not found, or -1 if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
