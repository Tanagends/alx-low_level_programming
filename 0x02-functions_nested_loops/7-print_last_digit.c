#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to be have its last digit determined.
 * Return: the last number of a digit.
 */
int print_last_digit(int n)
{
	int lastnum;

	lastnum = n % 10;
	putchar(lastnum);
	return (lastnum);
}
