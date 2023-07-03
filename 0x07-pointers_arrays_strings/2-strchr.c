/**
 * _strchr - locates character in string.
 *@s: the string.
 *@c: the char.
 *Return: pointer to first character of c or NULL..
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
