/**
 * _strpbrk - checks the string for for the presence of a char in accept string.
 *@s: whole string.
 *@accept: the sring with the chars.
 *Return: the pointer to the matching byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i;
unsigned int j;
unsigned int k;

for (i = 0; s[i] != '\0'; i++)
{
	j = 0;
	for (k = 0; accept[k] != '\0'; k++)
	{
		if (s[i] == accept[k])
		{
			j = 1;
			break;
		}
	}
	if (j)
		break;
}
return (s + i);
}
