/**
 * _memcpy - copies memory area.
 *@src: source memory.
 *@dest: destination memory.
 *@n: number of bytes to be copied.
 *Return: pointer to memory dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
