/**
 * _strcat - concatenates two strings.
 * @dest: pointer to the first string.
 * @src: pointer to the second string.
 * Return: dest(the resulting string).
 */
char *_strncat(char *dest, char *src, int n)
{
	char *init = dest;
	int n

	while (*init != '\0')
		*init++;
	while (*src != '\0')
	{
		*init = *src;
		init++;
		src++;
	}
	*init = '\0';
	return (dest);
}
