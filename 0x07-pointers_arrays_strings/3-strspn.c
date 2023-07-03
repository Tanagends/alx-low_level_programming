#include <string.h>
/**
 * _strspn - gets the length of a a string prefix..
 *@s: whole string.
 *@accept: the sring prefix.
 *Return: the string prefix length.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int l = strlen(accept);
	unsigned int k, j;

	j = 1;
	for (i = 0; i < l; i++)
	{
		for (k = 0; k < l; k++)
		{
			if (s[i] == accept[k])
			{
				j++;
				/*continue to the outer loop*/
				continue;
			}
		}
	}
	return (j);
}
