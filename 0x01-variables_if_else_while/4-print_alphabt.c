#include <stdio.h>
/**
 * main - prints alphabet characters.
 * Return: 0(Success)
 */
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	return (0);
}
