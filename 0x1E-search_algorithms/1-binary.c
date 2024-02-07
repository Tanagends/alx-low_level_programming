#include "search_algos.h"

/**
 * binary_search - searches an array value using binary search
 * @array: pointer to the first element of the array to be searched.
 * @size: array size.
 * @value: value to be searched
 *
 * Return: the index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	int *sub_array = array;
	size_t i, k; pos = size/2;

	if (!array) /* || ((size == 1) && (array[0] != value)))*/
		return (-1);
	
	for (i = size; i > 1; i/2)
	{
		printf("Searching in array: ");

		for (k = 0; k < i; k++)
		{
			if (k != i - 1)
				printf("%i, ", sub_array[k]);
			else
				printf("%i\n", sub_array[k]);
		}
 
		if (sub_array[i/2] == value)
			return (pos);
		else if (sub_array[pos] < value)
		{
			sub_array++;
			pos += i/2;
		}
		else
		{
			if (i % 2)
				sub_array -= (i/2 + 1);
			else
				sub_array -= i/2;
			pos -= i/4;
		}
	}
	return (-1);
}
