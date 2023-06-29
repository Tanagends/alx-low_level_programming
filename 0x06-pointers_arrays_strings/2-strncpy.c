/**
 * _strncpy - copies n characters of a string.
 * @dest: destination string.
 * @src: the string to be copied.
 * @n: the character amount to be printed.
 * Return: dest (new string)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
