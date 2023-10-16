/**
 * _islower - checks if c is lowercase.
 * @c: the character to check.
 * Return: 1 (success)
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
