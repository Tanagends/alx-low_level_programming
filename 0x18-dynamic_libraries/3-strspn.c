/**
 * _strspn - gets the length of a a string prefix..
 *@s: whole string.
 *@accept: the sring prefix.
 *Return: the string prefix length.
 */
unsigned int _strspn(char *s, char *accept)
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
	if (!j)
		break;
}
return (i);
}
