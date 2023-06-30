/**
 * cap_string - converts string to upper case.
 * @s: string to be converted.
 * Return: string in upper.
 */
char *cap_string(char *s)
{
	int i = 0;
	int k;
	char p[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		for (k = 0; k < 13; k++)
		{
			if (s[i - 1] == p[k])
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
