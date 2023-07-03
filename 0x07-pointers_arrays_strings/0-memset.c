/**
 * _memset - fills memory with constant byte.
 *@s: pointer to the memory.
 *@b: the char to be filled.
 *@n: number of times to be filled.
 *Return: pointer to memory s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
