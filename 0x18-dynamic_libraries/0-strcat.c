/**
 * _strcat - concatenates two strings.
 * @dest: pointer to the first string.
 * @src: pointer to the second string.
 * Return: dest(the resulting string).
 */
char *_strcat(char *dest, char *src)
{
	char *init = dest;

	while (*init != '\0')
		init++;
	while (*src != '\0')
	{
		*init = *src;
		init++;
		src++;
	}
	*init = '\0';
	return (dest);
}
