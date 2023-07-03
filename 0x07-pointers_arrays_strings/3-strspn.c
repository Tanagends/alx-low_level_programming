/**
 * _strspn - gets the length of a a string prefix..
 *@s: whole string.
 *@accept: the sring prefix.
 *Return: the string prefix length.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int l;
unsigned int k, j;

j = 1;
outer_loop:
for (i = 0; s[i] != '\0'; i++)
{
	for (k = 0; accept[k] != '\0'; k++)
	{
		if (s[i] == accept[k])
		{
			j++;
			/*continue to the outer loop*/
			continue outer_loop;
		}
	}
}
return (j);
}
