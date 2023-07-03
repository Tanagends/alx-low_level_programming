/**
 * _strpbrk - checks the string for for the presence of a char in accept string.
 *@s: whole string.
 *@accept: the sring with the chars.
 *Return: the pointer to the matching byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int k;

for (s = 0; *s; s++)
{
	for (k = 0; accept[k]; k++)
	{
		if (*s == accept[k])
			return (s);
	}
}
return ('\0');
}
