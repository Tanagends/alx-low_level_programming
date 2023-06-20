#include <stdio.h>
/* print_alphabet - prints alphabet.*/
void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
		putchar(s);
	putchar('\n');
}
