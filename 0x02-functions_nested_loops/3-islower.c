/**
 * _islower - checks if c is lowercase.
 * Return: 1 (success)
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
