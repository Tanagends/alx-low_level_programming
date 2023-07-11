#include <string.h>
#include <stdlib.h>
/**
 * *_strdup - copies a string into a newly allocated memory.
 * @str: the string.
 * Return: pointer to the copied string.
 */
char *_strdup(char *str)
{
	char *array;
	int i = strlen(str);
	int k;

	array = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	if (!array)
		return (NULL);
	for (i = 0; k <= i; k++)
	{
		array[i] = *str;
		str++;
	}
	return (array);
}
