/**
 * _strncat - concatenates two strings.
 * @dest: pointer to the first string.
 * @src: pointer to the second string.
 * @n: maximum length of src to be concatenated.
 * Return: dest(the resulting string).
 */
char *_strncat(char *dest, char *src, int n)
{
	char *init = dest;
	int i = 0;

	while (*init != '\0')
		init++;
	while (i++ < n)
	{
		*init = *src;
		init++;
		src++;
	}
	if (*src == '\0')
		*init = '\0';
	return (dest);
}
