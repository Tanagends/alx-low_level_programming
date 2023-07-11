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
	array = malloc(i + k + 1);
	if (!array)
		return (NULL);
	array = strcat(s1, s2);
	return (array);
}
