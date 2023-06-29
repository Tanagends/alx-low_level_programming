/**
 * _strcat - concatenates two strings.
 * @dest: pointer to the first string.
 * @src: pointer to the second string.
 * Return: dest(the resulting string).
 */
char *_strcat(char *dest, char *src)
{
	char *init = dest;

	while (*dest++)
	while (*src++)
	{
		*dest = *src;
		*dest++;
	}
	*dest = *src;
	dest = init;
	return (dest);
}
