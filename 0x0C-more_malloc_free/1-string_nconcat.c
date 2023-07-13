#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - allocates memory for concatenating strings.
 * @s1: first string.
 * @s2: second string.
 * @n: s2 length used.
 * Return: pointer to allocated memory after concatenation.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int k = 0;
	char *trunc_str;
	unsigned int i = 0;

	trunc_str = malloc((n + 1) * sizeof(char));
	if (trunc_str == NULL)
		exit(0);
	if (s1 != NULL)
		i = strlen(s1);
	if (s2 != NULL)
		k = strlen(s2);
	if (n >= k)
		n = k;
	a = malloc((i + n + 1) * sizeof(char));
	if (a == NULL)
		exit(0);
	strcpy(a, s1);
	strncpy(trunc_str, s2, n);
	trunc_str[n] = '\0';
	strcat(a, trunc_str);
	free(trunc_str);
	return (a);
}
