#include <string.h>
/**
 * rev_string - reverses a string.
 * @s: pointer to the string.
 */
void rev_string(char *s)
{
	int i;
	int k = strlen(s);
	int j;

	char s[] = *s;

	for (i = k - 1; i > -1; i--)
		for (j = 0; j < k; j++)
			*s[j] = *s[k];
	putchar('\n');
}
