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
	unsigned int i = 0;
	unsigned int m = 0;
	unsigned int b = 0;

	while (s1 && s1[i])
		i++;
	while (s2 && s2[k])
		k++;
	if (n >= k)
		n = k;
	a = malloc((i + n + 1) * sizeof(char));
	if (a == NULL)
		exit(0);
	for (m = 0; m < i; m++)
		a[m] = s1[m];
	while (b < n)
		a[m++] = s2[b++];
	a[m] = '\0';
	return (a);
}
