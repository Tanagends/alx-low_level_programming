/**
 * _puts_recursion - prints a string.
 * @s: the string.
 */
void _puts_recursion(char *s)
{
	if (!(*s))
		s++;
		*s = '\n';
		return;
	putchar(*s);
	_puts_recursion(s++);
}
