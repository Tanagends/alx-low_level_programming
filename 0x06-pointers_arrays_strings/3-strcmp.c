/**
 * _strcmp - compares two strings.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 * Return: the result.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	if (s1[i] > s2[i] || s2[i] == '\0')
		return (1 * (s1[i] - s2[i]));
	else if (s1[i] < s2[i] || s1[i] == '\0')
		return (-1 * (s2[i] - s1[i]));
	else
		return (0);
}
