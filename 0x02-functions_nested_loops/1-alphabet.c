#include <stdio.h>
#include "main.h"
/**
 * main - prints the alphabet.
 * Return: 0 (success)
 */
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
void print_alphabet(void)
{
	char s;

	for (s = 'a';s <= 'z'; s++)
		putchar(s);
}
