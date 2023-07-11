#include <string.h>
#include <stdlib.h>
/**
 * *_strdup - copies a string into a newly allocated memory.
 * @str: the string.
 * Return: pointer to the copied string.
 */

{
	char *array;
	int i = strlen(str);
	
	if (str == NULL)
		return (NULL);
	array = malloc(i + 1);
	if (!array)
		return (NULL);
	strcpy(array, str);
	return (array);
}
