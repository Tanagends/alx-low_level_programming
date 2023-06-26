#include <string.h>
/**
 * rev_string - reverses a string.
 * @s: pointer to the string.
 */
void rev_string(char *s)
{
	int i;
	int k = strlen(s);
	char tmp;

	for (i = 0; i < k / 2; i++)
	{	tmp = s[i];
		s[i] = s[k - 1 - i];
		s[k - 1 - i] = tmp;
	}
}
