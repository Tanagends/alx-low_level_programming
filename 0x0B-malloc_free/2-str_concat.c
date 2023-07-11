#include <string.h>
#include <stdlib.h>
/**
 * str_concat - conacatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * Return: pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *array;

	int i = 0;
	int k = 0;

	if (s1 != NULL)
		i = strlen(s1);
	if (s2 != NULL)
		k = strlen(s2);
	array = malloc((i + k + 1) * sizeof(char));
	if (!array)
		return (NULL);
	if (s1 != NULL)
		strcpy(array, s1);
	if (s2 != NULL)
		strcat(array, s2);
	return (array);
}
