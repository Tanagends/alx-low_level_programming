#include <stddef.h>
#include <string.h>
/**
 * _strchr - locates character in string.
 *@s: the string.
 *@c: the char.
 *Return: pointer to first character of c or NULL..
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int n = strlen(s);

	for (i = 0; i < n; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
